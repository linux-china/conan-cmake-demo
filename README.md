C++ Application with CMake and Conan
============

### How to use 

* create "CMAKE_BINARY_DIR" directory, such as "_build", for Clion, default is cmake-build-debug
* cd  "CMAKE_BINARY_DIR" and execute following code

```bash
conan install .. -s compiler="apple-clang" -s compiler.version="7.3" -s compiler.libcxx="libc++"
cmake ..
make
```

### Attention

* C++ Standard Library, Choose options as following: 

    * libstdc++ (GNU C++ standard library)
    * libc++ (LLVM C++ standard library with C++ 11 support)

* Compiler and compiler.version. For mac, please choose apple-clang and 7.3 version for most Conan packages


### Reference

* Conan Document: http://conanio.readthedocs.io/
* Conan with Clion: http://conanio.readthedocs.io/en/latest/integrations/clion.html

