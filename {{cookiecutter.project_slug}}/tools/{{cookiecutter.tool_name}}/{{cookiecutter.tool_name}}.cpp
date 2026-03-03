#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Dialect.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Conversion/Passes.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/Passes.h"

#include "mlir/Dialect/Arith/IR/Arith.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"

using namespace mlir;

int main(int argc, char **argv) {
  DialectRegistry registry;

  registry.insert<arith::ArithDialect>();
  registry.insert<func::FuncDialect>();
  registry.insert<{{cookiecutter.cpp_namespace}}::{{cookiecutter.dialect_name}}Dialect>();

  {{cookiecutter.cpp_namespace}}::register{{cookiecutter.dialect_name}}Passes();
  {{cookiecutter.cpp_namespace}}::register{{cookiecutter.dialect_name}}ConversionPasses();

  return asMainReturnCode(
      MlirOptMain(argc, argv, "{{cookiecutter.project_name}} optimizer\n", registry));
}
