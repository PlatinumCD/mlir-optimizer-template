#include "foo-mlir/Dialect/Bar/Conversion/LowerToTarget.h"

namespace mlir {
namespace foo_project {

StringRef LowerToTargetPass::getArgument() const {
  return "bar-lower-to-target";
}

StringRef LowerToTargetPass::getDescription() const {
  return "Example lowering pass stub";
}

void LowerToTargetPass::runOnOperation() {
  // Template stub: add conversion patterns here.
}

std::unique_ptr<Pass> createLowerToTargetPass() {
  return std::make_unique<LowerToTargetPass>();
}

}  // namespace foo_project
}  // namespace mlir
