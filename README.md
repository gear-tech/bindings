# Gear standard library bindings

Bindings to write smart contracts in various programming languages.

## C++

### Prerequisites

- [Clang compiler](https://clang.llvm.org/)
- ~[Meson build system](https://mesonbuild.com/)~
- [CMake](https://cmake.org/)

### Building example

```shell
cd cpp/examples/ping
mkdir -p build
cd build
```

Setup:

```
cmake ..
```

Build:

```
cmake --build .
```

Obsolete:

Setup on macOS:

```
meson setup --cross-file ../mac.ini builddir
```

Build:

```
meson compile -C builddir
```
