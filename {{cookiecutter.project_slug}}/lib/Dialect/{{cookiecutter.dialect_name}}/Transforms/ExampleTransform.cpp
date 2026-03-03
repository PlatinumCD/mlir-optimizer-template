#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/ExampleTransform.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Dialect.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/IR/{{cookiecutter.dialect_name}}Ops.h"

#include "mlir/Dialect/Arith/IR/Arith.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"
#include "mlir/IR/DialectRegistry.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

StringRef ExampleTransformPass::getArgument() const {
  return "{{cookiecutter.dialect_namespace}}-example-transform";
}

StringRef ExampleTransformPass::getDescription() const {
  return "Example transform pass for the generated template";
}

void ExampleTransformPass::getDependentDialects(DialectRegistry &registry) const {
  registry.insert<{{cookiecutter.dialect_name}}Dialect>();
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

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir
