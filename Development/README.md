<!-- omit in toc -->
## Development Kit for Slxio

- [0.0 Introduction](#00-introduction)
- [1.0 Build System](#10-build-system)
- [2.0 Clang-format](#20-clang-format)
- [3.0 Dependancy Mangment](#30-dependancy-mangment)
  - [3.1 ThirdParty Dependnacy Injection](#31-thirdparty-dependnacy-injection)
    - [3.1.1](#311)
  - [3.2  Internal Modules Mangment System](#32--internal-modules-mangment-system)
- [4.0](#40)

# 0.0 Introduction 
This guide contain basic documentenation and hwo to use automation/utilties in [Develeopment](/Development/) folder 

# 1.0 Build System
Slxio uses it internal module based build system which was hevilly inspired from [VTK]() project, 
which is warrped on cmake function hwover it is more simpler and intivties, using one 'Module.txt' file as mdoule declation metadata, 
each module is build as a static librray (shared libs are not yet supported and may be not supported), along with it delcaed dependnacies (see Dependnayc mangment section for more informations).
modules contain their own source header files, along with unit test, bindings soirces and documenations pages, all configurable via 'Module.txt' file paramters (see [Module.txt]() template )

# 2.0 Clang-format
# 3.0 Dependancy Mangment 
## 3.1 ThirdParty Dependnacy Injection
### 3.1.1 
## 3.2  Internal Modules Mangment System 
# 4.0 
