# mlir-optimizer-template

Cookiecutter template for creating a small out-of-tree MLIR project.

It generates:

- a new MLIR-based optimizer repository
- one custom dialect
- transform and conversion pass scaffolding
- a custom `mlir-opt`-style driver
- starter `examples/` and `test/` directories

## Who This Is For

Use this template if you want to start an MLIR project with:

- a clean out-of-tree CMake layout
- a custom dialect
- a custom optimizer binary
- a place to add passes, lowerings, examples, and tests

## The Two Main Prompts

### `optimizer_name`

This controls the generated project name and tool name.

If `optimizer_name=foo`, the template generates:

- project directory: `foo-mlir/`
- optimizer binary: `foo-mlir-opt`
- include prefix: `foo-mlir/...`

### `dialect_name`

This controls the dialect scaffolding.

If `dialect_name=Bar`, the template generates:

- dialect headers and sources under `Dialect/Bar/`
- dialect class names based on `Bar`
- pass registration names based on `Bar`

## Quickstart

Install Cookiecutter:

```bash
python3 -m pip install --user cookiecutter
```

Generate a new project from this template:

```bash
cookiecutter <path-or-git-url-to-this-template>
```

Example:

```bash
cookiecutter <path-or-git-url-to-this-template> --no-input \
  optimizer_name=foo \
  dialect_name=Bar
```

That generates:

```text
foo-mlir/
```

with a tool named:

```text
foo-mlir-opt
```

## What Gets Generated

The generated project looks like this:

```text
<optimizer_name>-mlir/
├── CMakeLists.txt
├── README.md
├── include/
│   └── <optimizer_name>-mlir/
│       └── Dialect/
│           └── <dialect_name>/
├── lib/
│   └── Dialect/
│       └── <dialect_name>/
├── tools/
│   └── <optimizer_name>-mlir-opt/
├── test/
└── examples/
```

Inside that scaffold you get:

- dialect TableGen files
- dialect C++ declarations and definitions
- one example transform pass
- one example conversion pass
- a custom optimizer driver
- minimal install rules

## Build A Generated Project

The generated project expects an existing LLVM/MLIR installation with `MLIRConfig.cmake` available.

Typical configure and build flow:

```bash
cmake -S foo-mlir -B foo-mlir/build \
  -DMLIR_DIR=/path/to/lib/cmake/mlir

cmake --build foo-mlir/build -j4
```

If your LLVM/MLIR install is under a custom prefix, `MLIR_DIR` usually looks like:

```text
<llvm-install-prefix>/lib/cmake/mlir
```

## Install A Generated Project

Example install:

```bash
cmake -S foo-mlir -B foo-mlir/build \
  -DMLIR_DIR=/path/to/lib/cmake/mlir \
  -DCMAKE_INSTALL_PREFIX=/path/to/install/prefix

cmake --build foo-mlir/build -j4
cmake --install foo-mlir/build
```

That installs:

- `bin/foo-mlir-opt`
- generated project headers
- project static libraries
- example MLIR files

## Defaults

If you accept all defaults, the template currently renders:

- `optimizer_name=my`
- `dialect_name=MyDialect`
- project directory: `my-mlir/`
- binary name: `my-mlir-opt`

## Template vs Generated Project

The template repository contains cookiecutter source files such as:

- `cookiecutter.json`
- `{{cookiecutter.project_slug}}/`

A generated project is a separate output directory such as:

- `foo-mlir/`

Build directories like `build/` are not part of the template; they are just local CMake output for a rendered project.
