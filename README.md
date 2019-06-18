C++ Application with CMake and Conan
=====================================

# How to use 

* Install Conan plugin in Clion: https://plugins.jetbrains.com/plugin/11956-conan
* create "CMAKE_BINARY_DIR" directory, such as "_build", for Clion, default is cmake-build-debug
* cd  "CMAKE_BINARY_DIR" and execute following code

```bash
conan install . -s build_type=Debug --install-folder=cmake-build-debug
cd cmake-build-debug
cmake ..
make
```

# Attention

* C++ Standard Library, Choose options as following: 

    * libstdc++ (GNU C++ standard library)
    * libc++ (LLVM C++ standard library with C++ 11 support)

* Compiler and compiler.version. For mac, please choose apple-clang and 7.3 version for most Conan packages


# Conan Repositories

* https://bintray.com/conan/conan-center 
* https://bintray.com/pocoproject/conan 
* https://bintray.com/bincrafters/public-conan

# Reference

* Conan Document: http://conanio.readthedocs.io/
* Conan CLion Plugin: https://blog.jetbrains.com/clion/2019/05/getting-started-with-the-conan-clion-plugin/
* Conan integrated with CMake: https://conan-docs.readthedocs.io/en/feature-cmake-toolchain-file/integrations/cmake.html

