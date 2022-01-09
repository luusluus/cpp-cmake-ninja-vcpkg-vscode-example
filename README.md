# C++ CMake with Ninja and vcpkg in Vscode

## Install tools

### Install Latest CMake
https://apt.kitware.com/

### Install GCC and Ninja

```bash
sudo apt-add-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install gcc-10 g++-10 ninja-build python3.8
```

### Optionally, install Clang and LLVM

```bash
sudo bash -c "$(wget -O - https://apt.llvm.org/llvm.sh)"
```

### Install vcpkg
Vcpkg is a package manager for C++

```bash
git clone https://github.com/Microsoft/vcpkg.git ~/source/vcpkg
cd ~/src/vcpkg
./bootstrap-vcpkg.sh
./vcpkg integrate install
./vcpkg integrate bash
```

### Install VSCode extensions

- C/C++ by Microsoft
- CMake by Microsoft
- CMake Tools by Microsoft