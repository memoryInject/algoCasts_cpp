# AlgoCasts - cpp
![example workflow](https://github.com/memoryInject/algoCasts_cpp/actions/workflows/cmake.yml/badge.svg)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Common alogrithms and problems solved in c++ with googletest driven environment.

## Installation

Clone the repo into local drive

```bash
git clone https://github.com/memoryInject/algoCasts_cpp
```

## Usage
This project does require cmake in a linux environment to build and run the tests. \
Run the test by typing the code below in bash

```bash
cd algoCasts_cpp

cmake . -B build

cd build

make

GTEST_COLOR=1 ctest -V
```

## File structure

<img src="https://github.com/memoryInject/algoCasts_cpp/blob/master/file_structure.svg" />

CMake will download googletest suit from github and create: &nbsp;"libs/googletest". \
After building the project the executable can be found in: &nbsp;"build/src/<00_project>/<project>". \
All source files are under: &nbsp;"src/<00_project>/<project.cpp>". \
Test file is on every project directry with the name of 'main.cpp': &nbsp;"src/<00_project>/main.cpp".

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
