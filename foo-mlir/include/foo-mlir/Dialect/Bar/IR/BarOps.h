#ifndef BAR_OPS_H
#define BAR_OPS_H

#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/OpDefinition.h"

#include "foo-mlir/Dialect/Bar/IR/BarDialect.h"

#define GET_OP_CLASSES
#include "foo-mlir/Dialect/Bar/IR/BarOps.h.inc"

#endif
