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


# conan repo

* https://bintray.com/conan/conan-center : conan remote add conan-center https://api.bintray.com/conan/conan/conan-center 
* https://bintray.com/pocoproject/conan  : conan remote add pocoproject https://api.bintray.com/conan/pocoproject/conan 

# Reference

* Conan Document: http://conanio.readthedocs.io/
* Conan with Clion: https://docs.conan.io/en/latest/integrations/clion.html

