#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Conversion/LowerToTarget.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

StringRef LowerToTargetPass::getArgument() const {
  return "{{cookiecutter.dialect_namespace}}-lower-to-target";
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

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir
