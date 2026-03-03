#include "foo-mlir/Dialect/Bar/IR/BarDialect.h"
#include "foo-mlir/Dialect/Bar/Conversion/Passes.h"
#include "foo-mlir/Dialect/Bar/Transforms/Passes.h"

#include "mlir/Dialect/Arith/IR/Arith.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"

using namespace mlir;

int main(int argc, char **argv) {
  DialectRegistry registry;

  registry.insert<arith::ArithDialect>();
  registry.insert<func::FuncDialect>();
  registry.insert<foo_project::BarDialect>();

  foo_project::registerBarPasses();
  foo_project::registerBarConversionPasses();

  return asMainReturnCode(
      MlirOptMain(argc, argv, "foo MLIR Project optimizer\n", registry));
}
