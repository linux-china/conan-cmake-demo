C++ Application with CMake and conan
============

### How to use 

* create "CMAKE_BINARY_DIR" directory, such as "_build", for Clion, default is cmake-build-debug
* cd  "CMAKE_BINARY_DIR" and execute following code

```bash
conan install .. -s compiler="apple-clang" -s compiler.version="7.3" -s compiler.libcxx="libc++"
cmake ..
make
```

### Reference

* https://www.conan.io/

