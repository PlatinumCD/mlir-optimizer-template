#ifndef BAR_LOWER_TO_TARGET_H
#define BAR_LOWER_TO_TARGET_H

#include "mlir/IR/BuiltinOps.h"
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace foo_project {

class LowerToTargetPass : public PassWrapper<LowerToTargetPass, OperationPass<ModuleOp>> {
public:
  StringRef getArgument() const override;
  StringRef getDescription() const override;
  void runOnOperation() override;
};

}  // namespace foo_project
}  // namespace mlir

#endif
