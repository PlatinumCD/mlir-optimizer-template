#ifndef {{cookiecutter.dialect_name | upper}}_OPS_H
#define {{cookiecutter.dialect_name | upper}}_OPS_H

#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/OpDefinition.h"

#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Dialect.h"

#define GET_OP_CLASSES
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.h.inc"

#endif
