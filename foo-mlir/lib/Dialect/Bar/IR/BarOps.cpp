#include "foo-mlir/Dialect/Bar/IR/BarOps.h"

using namespace mlir;
using namespace mlir::foo_project;

#define GET_OP_CLASSES
#include "foo-mlir/Dialect/Bar/IR/BarOps.cpp.inc"
