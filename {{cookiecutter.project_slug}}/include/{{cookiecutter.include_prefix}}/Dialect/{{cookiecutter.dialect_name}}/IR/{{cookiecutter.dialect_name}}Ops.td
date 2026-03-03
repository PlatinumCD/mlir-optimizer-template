#ifndef {{cookiecutter.dialect_name | upper}}_OPS_TD
#define {{cookiecutter.dialect_name | upper}}_OPS_TD

include "mlir/IR/OpBase.td"
include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Base.td"

def {{cookiecutter.dialect_name}}_WrapOp
    : {{cookiecutter.dialect_name}}_Op<"wrap"> {
  let summary = "Wrap a value in the dialect";
  let arguments = (ins AnyType:$input);
  let results = (outs AnyType:$result);
}

def {{cookiecutter.dialect_name}}_UnwrapOp
    : {{cookiecutter.dialect_name}}_Op<"unwrap"> {
  let summary = "Unwrap a dialect value";
  let arguments = (ins AnyType:$input);
  let results = (outs AnyType:$result);
}

#endif
