#include "foo-mlir/Dialect/Bar/Transforms/ExampleTransform.h"
#include "foo-mlir/Dialect/Bar/IR/BarDialect.h"
#include "foo-mlir/Dialect/Bar/IR/BarOps.h"

#include "mlir/Dialect/Arith/IR/Arith.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/IR/DialectRegistry.h"

namespace mlir {
namespace foo_project {

StringRef ExampleTransformPass::getArgument() const {
  return "bar-example-transform";
}

StringRef ExampleTransformPass::getDescription() const {
  return "Example transform pass for the generated template";
}

void ExampleTransformPass::getDependentDialects(DialectRegistry &registry) const {
  registry.insert<BarDialect>();
}

void ExampleTransformPass::runOnOperation() {
  func::FuncOp func = getOperation();

  func.walk([&](arith::ConstantOp op) {
    if (!op.getType().isIntOrIndex())
      return;

    OpBuilder builder(op);
    builder.setInsertionPointAfter(op);
    auto wrapped = builder.create<WrapOp>(op.getLoc(), op.getType(), op.getResult());
    builder.create<UnwrapOp>(op.getLoc(), op.getType(), wrapped.getResult());
  });
}

std::unique_ptr<Pass> createExampleTransformPass() {
  return std::make_unique<ExampleTransformPass>();
}

}  // namespace foo_project
}  // namespace mlir
