#ifndef BAR_OPS_TD
#define BAR_OPS_TD

include "mlir/IR/OpBase.td"
include "foo-mlir/Dialect/Bar/IR/BarBase.td"

def Bar_WrapOp
    : Bar_Op<"wrap"> {
  let summary = "Wrap a value in the dialect";
  let arguments = (ins AnyType:$input);
  let results = (outs AnyType:$result);
}

def Bar_UnwrapOp
    : Bar_Op<"unwrap"> {
  let summary = "Unwrap a dialect value";
  let arguments = (ins AnyType:$input);
  let results = (outs AnyType:$result);
}

#endif
