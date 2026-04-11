function createRegressionTree(inputFolder, regressionRoot)
    % Create regression data tree by migrating Simulink models
    % inputFolder   : path to SLNET_v1_Matlab (source models)
    % regressionRoot: path to regression tree root (e.g. 'C:\RegressionData')
warning off;
    % List of MATLAB releases for regression
    releases = { ...
        'R2018a','R2018b','R2019a','R2019b','R2020a','R2020b', ...
        'R2021a','R2021b','R2022a','R2022b','R2023a','R2023b', ...
        'R2024a','R2024b','R2025a'};

    % Ensure regression root exists
    if ~exist(regressionRoot, 'dir')
        mkdir(regressionRoot);
    end

    % Find all .slx and .sldd files in inputFolder (recursively)
    files = [dir(fullfile(inputFolder, '**', '*.slx')); ...
             dir(fullfile(inputFolder, '**', '*.sldd'))];

    % Loop through each file
    for k = 1:numel(files)
        srcFile = fullfile(files(k).folder, files(k).name);

        % For each release, migrate the file into the release folder
        for r = 1:numel(releases)
            releaseFolder = fullfile(regressionRoot, releases{r});
            if ~exist(releaseFolder, 'dir')
                mkdir(releaseFolder);
            end

            destFile = fullfile(releaseFolder, files(k).name);

            try
                % If it's a Simulink model
                if endsWith(srcFile, '.slx') 
                    % Export to target release format
                    [~, modelName, ext] = fileparts(srcFile);
                    load_system(srcFile);
                            % Export to target release format
        Simulink.exportToVersion(modelName, destFile, releases{r});

        % Close the model
        close_system(modelName, 0);

                    fprintf('Migrated %s -> %s (format %s)\n', srcFile, destFile, releases{r});

                % If it's a data dictionary
                elseif endsWith(srcFile, '.sldd')
                    dictObj = Simulink.data.dictionary.open(srcFile);
                    saveAs(dictObj, destFile); % saves in current release format
                    fprintf('Migrated dictionary %s -> %s\n', srcFile, destFile);
                    close(dictObj);
                end
            catch ME
                error('Failed to migrate %s to %s: %s', srcFile, releases{r}, ME.message);
            end
        end
    end

    fprintf('Regression tree created successfully.\n');
end
