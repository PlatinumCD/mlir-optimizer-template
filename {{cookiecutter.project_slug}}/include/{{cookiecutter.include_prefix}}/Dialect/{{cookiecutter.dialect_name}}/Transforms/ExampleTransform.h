#ifndef {{cookiecutter.dialect_name | upper}}_EXAMPLE_TRANSFORM_H
#define {{cookiecutter.dialect_name | upper}}_EXAMPLE_TRANSFORM_H

#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/IR/DialectRegistry.h"
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

class ExampleTransformPass
    : public PassWrapper<ExampleTransformPass, OperationPass<func::FuncOp>> {
public:
  StringRef getArgument() const override;
  StringRef getDescription() const override;
  void runOnOperation() override;
  void getDependentDialects(DialectRegistry &registry) const override;
};

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir

#endif
