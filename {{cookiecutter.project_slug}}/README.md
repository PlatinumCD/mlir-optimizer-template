# {{cookiecutter.project_name}}

Generic out-of-tree MLIR project generated from a cookiecutter template.

## Structure

- `include/`: public headers and TableGen definitions
- `lib/`: dialect, transforms, and conversion implementations
- `tools/`: custom optimizer driver
- `test/`: lit configuration and sample tests
- `examples/`: example MLIR inputs

## Build

This project expects a working MLIR/LLVM build with `MLIRConfig.cmake` available.

```bash
cmake -S . -B build -DMLIR_DIR=/path/to/lib/cmake/mlir
cmake --build build
```

## Run

```bash
./build/bin/{{cookiecutter.tool_name}} examples/basic.mlir
```
