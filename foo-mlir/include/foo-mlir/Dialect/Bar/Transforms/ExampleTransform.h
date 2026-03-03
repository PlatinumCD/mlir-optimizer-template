#ifndef BAR_EXAMPLE_TRANSFORM_H
#define BAR_EXAMPLE_TRANSFORM_H

#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/IR/DialectRegistry.h"
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace foo_project {

class ExampleTransformPass
    : public PassWrapper<ExampleTransformPass, OperationPass<func::FuncOp>> {
public:
  StringRef getArgument() const override;
  StringRef getDescription() const override;
  void runOnOperation() override;
  void getDependentDialects(DialectRegistry &registry) const override;
};

}  // namespace foo_project
}  // namespace mlir

#endif
