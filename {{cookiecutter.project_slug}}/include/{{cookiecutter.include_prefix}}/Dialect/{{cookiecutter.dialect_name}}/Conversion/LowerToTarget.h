#ifndef {{cookiecutter.dialect_name | upper}}_LOWER_TO_TARGET_H
#define {{cookiecutter.dialect_name | upper}}_LOWER_TO_TARGET_H

#include "mlir/IR/BuiltinOps.h"
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

class LowerToTargetPass : public PassWrapper<LowerToTargetPass, OperationPass<ModuleOp>> {
public:
  StringRef getArgument() const override;
  StringRef getDescription() const override;
  void runOnOperation() override;
};

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir

#endif
