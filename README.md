# algos - Leetcode Algorithms with Python and C++

## Dependencies
* (C++) C++ Compiler ( g++ or clang++ )
* (C++) [cmake](https://cmake.org/) (optional but recommended)
* (Python) [Python 3.0+](https://www.python.org/)
* (Python) [pytest](https://docs.pytest.org/en/6.2.x/)

### Installing Python dependencies
Python packages can be easily and conveniently installed using `pip` via the command line like so:
```sh
$ python3 -m pip install {package_name}
```
In the case of `algos`, all Python dependencies can be installed in one command using the requirements.txt file as so:
```sh
$ python3 -m pip install -r requirements.txt
```

## C++ Compiling
This repository can be built as a `cmake` project or can be used with the standalone C++ scripts.

### cmake
The following are the steps to compile the C++ portion of this repostiory with `cmake` (starting from the base of the repository):

```sh
$ mkdir build
$ cd build
$ cmake ../src/
$ make
```
The last 2 commands can be optionally run with the `-j` flag for multithreading. For example:
```sh
$ make -j4
```

### Standalone
If you are unfamiliar with / don't want to use `cmake`, there are standalone C++ scripts that can be quickly compiled and run with a simple call to g++ or clang++. These scripts can be found at: `src/cpp/standalone`.

Each standalone script is accompanied by a `bash` script that:
1. Calls g++ to compile standalone and implementation scripts
2. Calls executable
3. Deletes executable

One can replace "g++" with "clang++" in the `bash` scripts if desired.

## Unit Tests
Both the C++ and Python portions of this repository have unit tests implemented. The C++ portion uses [GoogleTest](https://google.github.io/googletest/) and the Python portion uses `pytest`.

### C++
After compiling, one can simply run the unit tests with the `ctest` command (with optional flags)
```sh
$ ctest -j4 -V # V for verbose output, if desired
```

### Python
The Python unit tests in this repository can be run exactly the same as in the [Astrodynamics with Python repository](https://github.com/alfonsogonzalez/AWP):
```sh
$ python3 -m pytest src/py/ -vv
$ pytest src/py/ -vv
```
