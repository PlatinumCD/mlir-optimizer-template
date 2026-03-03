#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Dialect.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.h"

using namespace mlir;

using namespace mlir::{{cookiecutter.cpp_namespace}};

#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Base.cpp.inc"

void {{cookiecutter.dialect_name}}Dialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.cpp.inc"
      >();
}
