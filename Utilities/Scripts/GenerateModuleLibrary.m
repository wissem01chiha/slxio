%==============================================================================
% Copyright 2025-2026 Wissem Chiha
%
% Licensed under the Apache License, Version 2.0 (the "License");
% you may not use this file except in compliance with the License.
% You may obtain a copy of the License at
%
%     http://www.apache.org/licenses/LICENSE-2.0
%
% Unless required by applicable law or agreed to in writing, software
% distributed under the License is distributed on an "AS IS" BASIS,
% WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
% See the License for the specific language governing permissions and
% limitations under the License.
%==============================================================================

%==============================================================================
% This script generates C++ wrapper classes for Simulink library blocks.
%
% Output:
%   - Generates *.h and *.cxx files for each discovered block.
%
% Side Effects:
%   - Creates a 'Library' directory in the current working directory.
%   - Creates subdirectories that mirror the Simulink library hierarchy.
%   - Generates a CMakeLists.txt file in each library subdirectory,
%     listing all source and header files contained within that directory.
%   - Generates a top-level CMakeLists.txt file in the 'Library'
%     directory that adds all generated subdirectories.
%   - Generates getter and setter declarations for each generated class,
%     along with their corresponding implementations in the generated
%     source files.
%
% Notes:
%   - One C++ class is generated for each Simulink block.
%   - Generated files are organized by library category.
%   - Re-running the script may overwrite previously generated files.
%     Use with caution.
%   - All generated class members use std::string as their default data
%     type and are prefixed with 'm_'.
%==============================================================================

%% Static configuration for C++ code generation
includeHeaders = { ...
    'ABINamespaceMacro.h', ...
    'LibraryECH.h', ...
    'APIExportMacro.h', ...
    'PlatformTypes.h', ...
    'IBlockParameters.h', ...
    'IBlockProperties.h'};
% By default, all generated classes inherit from these interfaces.
% Note:
% Each interface listed here must have its corresponding header included
% in the includeHeaders variable above.
publicBaseInterfaces = { ...
    'IBlockParameters', ...
    'IBlockProperties'};

%% Generate C++ headers from Simulink library blocks

load_system('simulink');
outRoot = fullfile(pwd, 'Library');
if ~exist(outRoot, 'dir')
    mkdir(outRoot);
end
blocks = find_system( ...
    'simulink', ...
    'FollowLinks', 'on', ...
    'LookUnderMasks', 'all', ...
    'Type', 'Block');

for k = 1:numel(blocks)
    blockPath = blocks{k};
    try
        parts = strsplit(blockPath, '/');
        if numel(parts) < 3
            continue;
        end
        category = sanitizeFolderName(parts{2});
        blockName = get_param(blockPath, 'Name');
        className = makeCppIdentifier(blockName);
        categoryDir = fullfile(outRoot, category);
        if ~exist(categoryDir, 'dir')
            mkdir(categoryDir);
        end
        outputFile = fullfile(categoryDir, [className '.h']);
        if exist(outputFile, 'file')
            continue;
        end
        params = get_param(blockPath, 'DialogParameters');
        if isempty(params)
            paramNames = {};
        else
            paramNames = fieldnames(params);
        end
        generateHeaderFile( ...
            outputFile, ...
            className, ...
            paramNames, ...
            blockPath, ...
            includeHeaders, ...
            publicBaseInterfaces);
        sourceFile = fullfile(categoryDir, [className '.cxx']);
        generateSourceFile(sourceFile, className,paramNames);
        fprintf('Generated %s\n', outputFile);
    catch ME
        fprintf('Failed: %s\n', blockPath);
        fprintf('Reason: %s\n', ME.message);
    end
end

generateCMakeListsInput();

fprintf('Generation %d Source Files\n', numel(blocks));
fprintf('Generation complete.\n');

%==============================================================================
function generateHeaderFile(fileName, className, paramNames, ~, ...
    includeHeaders, publicBaseInterfaces)

guard = upper(regexprep(className, '[^A-Za-z0-9]', '_'));
fid = fopen(fileName, 'w');

fprintf(fid, '// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha\n');
fprintf(fid, '// SPDX-License-Identifier: Apache-2.0\n\n');
fprintf(fid, '#ifndef %s_H\n', guard);
fprintf(fid, '#define %s_H\n\n', guard);

for i = 1:numel(includeHeaders)
    fprintf(fid, '#include "%s"\n', includeHeaders{i});
end
fprintf(fid, '\n');

fprintf(fid, 'namespace slxio {\n');
fprintf(fid, 'SLXIO_ABI_NAMESPACE_BEGIN\n\n');

inheritance = '';
isPublicIncluded = false;
if ~isempty(publicBaseInterfaces)
    inheritance = ' : public ';
    for i = 1:numel(publicBaseInterfaces)
        inheritance = [inheritance publicBaseInterfaces{i}];
        if i < numel(publicBaseInterfaces)
            if ~isPublicIncluded
                inheritance = [inheritance ', public '];
                isPublicIncluded =true;
            else
                inheritance = [inheritance ', '];
            end
        end
    end
end

fprintf(fid, ...
    'class SLXIO_APIEXPORT %s%s\n', ...
    className, ...
    inheritance);

fprintf(fid, '{\n');

fprintf(fid, 'public:\n');
fprintf(fid, '  /** Default Constructor */\n');
fprintf(fid, '  %s();\n\n', className);

fprintf(fid, '  /** Default Destructor */\n');
fprintf(fid, '  ~%s();\n\n', className);

% Gettes and Setters
for i = 1:numel(paramNames)
    paramName = makeCppIdentifier(paramNames{i});
    fprintf(fid, ...
        '  const std::string& Get%s() const;\n', ...
        paramName);
    fprintf(fid, ...
        '  void Set%s(const std::string& value);\n\n', ...
        paramName);
end

fprintf(fid, 'private:\n\n');

for i = 1:numel(paramNames)
    paramName = makeCppIdentifier(paramNames{i});
    fprintf(fid, '  std::string m_%s;\n\n', paramName);
end

fprintf(fid, '};\n\n');
fprintf(fid, 'SLXIO_ABI_NAMESPACE_END\n');
fprintf(fid, '} // namespace slxio\n\n');
fprintf(fid, '#endif // %s_H\n', guard);
fclose(fid);
end

%==============================================================================
function out = sanitizeFolderName(name)
out = regexprep(name, '[^A-Za-z0-9]', '');
if isempty(out)
    out = 'Unknown';
end
end

%==============================================================================
function out = makeCppIdentifier(name)

name = strtrim(name);
name = regexprep(name, '[^A-Za-z0-9]+', ' ');
tokens = strsplit(name);
out = '';
for i = 1:numel(tokens)
    t = tokens{i};
    if isempty(t)
        continue;
    end
    out = [out upper(t(1)) lower(t(2:end))]; %#ok<AGROW>
end
if isempty(out)
    out = 'UnnamedBlock';
end
if isstrprop(out(1), 'digit')
    out = ['D' out];
end
end

%==============================================================================
function generateSourceFile(fileName, className, paramNames)

fid = fopen(fileName, 'w');
fprintf(fid, '#include "%s.h"\n\n', className);
fprintf(fid, 'namespace slxio {\n');
fprintf(fid, 'SLXIO_ABI_NAMESPACE_BEGIN\n\n');
fprintf(fid, '%s::%s() {}\n\n', ...
    className, className);
fprintf(fid, '%s::~%s() {}\n\n', ...
    className, className);

% Getters and Setters impl
for i = 1:numel(paramNames)
    paramName = makeCppIdentifier(paramNames{i});
    fprintf(fid, ...
        'const std::string& %s::Get%s() const\n', ...
        className, ...
        paramName);
    fprintf(fid, '{\n');
    fprintf(fid, '    return m_%s;\n', paramName);
    fprintf(fid, '}\n\n');
    fprintf(fid, ...
        'void %s::Set%s(const std::string& value)\n', ...
        className, ...
        paramName);
    fprintf(fid, '{\n');
    fprintf(fid, '    m_%s = value;\n', paramName);
    fprintf(fid, '}\n\n');
end

fprintf(fid, 'SLXIO_ABI_NAMESPACE_END\n');
fprintf(fid, '}; // namespace slxio\n');
fclose(fid);
end
%==============================================================================
function generateCMakeListsInput()

libraryRoot = fullfile(pwd, 'Library');
dirs = dir(libraryRoot);
dirs = dirs([dirs.isdir]);
dirs = dirs(~ismember({dirs.name}, {'.','..'}));
rootFile = fullfile(libraryRoot,'CMakeLists.txt');
fidRoot = fopen(rootFile,'w');
fprintf(fidRoot,'set(LIB_SRCS)\n');
fprintf(fidRoot,'set(LIB_HDRS)\n\n');
for k = 1:numel(dirs)

    folderName = dirs(k).name;

    generateSubFolderCMake( ...
        fullfile(libraryRoot,folderName), ...
        folderName);

    fprintf(fidRoot, ...
        'add_subdirectory(%s)\n', ...
        folderName);
end
fprintf(fidRoot,'\n');
for k = 1:numel(dirs)
    folderName = dirs(k).name;
    fprintf(fidRoot, ...
        'list(APPEND LIB_SRCS ${%s_SRCS})\n', ...
        folderName);
end
fprintf(fidRoot,'\n');
for k = 1:numel(dirs)
    folderName = dirs(k).name;
    fprintf(fidRoot, ...
        'list(APPEND LIB_HDRS ${%s_HDRS})\n', ...
        folderName);
end
fclose(fidRoot);
end
%==============================================================================
function relPath = relativePath(fileInfo, rootDir)
fullName = fullfile(fileInfo.folder, fileInfo.name);
relPath = erase(fullName, [rootDir filesep]);
relPath = strrep(relPath, filesep, '/');
end
%==============================================================================
function generateSubFolderCMake(folderPath, folderName)

cmakeFile = fullfile(folderPath, 'CMakeLists.txt');
hdrFiles = dir(fullfile(folderPath, '*.h'));
srcFiles = dir(fullfile(folderPath, '*.cxx'));
fid = fopen(cmakeFile, 'w');
fprintf(fid, 'set(%s_SRCS\n', folderName);
for k = 1:numel(srcFiles)
    fprintf(fid, ...
        '    ${CMAKE_CURRENT_SOURCE_DIR}/%s\n', ...
        srcFiles(k).name);
end
fprintf(fid, ')\n\n');
fprintf(fid, 'set(%s_HDRS\n', folderName);

for k = 1:numel(hdrFiles)
    fprintf(fid, ...
        '    ${CMAKE_CURRENT_SOURCE_DIR}/%s\n', ...
        hdrFiles(k).name);
end
fprintf(fid, ')\n\n');
fprintf(fid, '\n');

fprintf(fid, ...
    'set(%s_HDRS ${%s_HDRS} PARENT_SCOPE)\n', ...
    folderName, ...
    folderName);
fprintf(fid, ...
    'set(%s_SRCS ${%s_SRCS} PARENT_SCOPE)\n', ...
    folderName, ...
    folderName);

fclose(fid);
end
%==============================================================================