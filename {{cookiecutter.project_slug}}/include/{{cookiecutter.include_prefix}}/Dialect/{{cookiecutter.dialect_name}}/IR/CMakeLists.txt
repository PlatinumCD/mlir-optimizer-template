set(LLVM_TARGET_DEFINITIONS {{cookiecutter.dialect_name}}.td)

mlir_tablegen({{cookiecutter.dialect_name}}Base.h.inc -gen-dialect-decls -dialect={{cookiecutter.dialect_namespace}})
mlir_tablegen({{cookiecutter.dialect_name}}Base.cpp.inc -gen-dialect-defs -dialect={{cookiecutter.dialect_namespace}})
mlir_tablegen({{cookiecutter.dialect_name}}Ops.h.inc -gen-op-decls)
mlir_tablegen({{cookiecutter.dialect_name}}Ops.cpp.inc -gen-op-defs)

add_public_tablegen_target({{cookiecutter.dialect_name}}IRIncGen)
