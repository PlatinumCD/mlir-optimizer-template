#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.h"

using namespace mlir;
using namespace mlir::{{cookiecutter.cpp_namespace}};

#define GET_OP_CLASSES
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.cpp.inc"
