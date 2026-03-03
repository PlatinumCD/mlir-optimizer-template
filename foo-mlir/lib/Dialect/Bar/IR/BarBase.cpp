#include "foo-mlir/Dialect/Bar/IR/BarDialect.h"
#include "foo-mlir/Dialect/Bar/IR/BarOps.h"

using namespace mlir;

using namespace mlir::foo_project;

#include "foo-mlir/Dialect/Bar/IR/BarBase.cpp.inc"

void BarDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "foo-mlir/Dialect/Bar/IR/BarOps.cpp.inc"
      >();
}
