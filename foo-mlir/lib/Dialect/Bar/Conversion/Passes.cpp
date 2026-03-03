#include "foo-mlir/Dialect/Bar/Conversion/Passes.h"
#include "foo-mlir/Dialect/Bar/Conversion/LowerToTarget.h"

#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace foo_project {

void registerBarConversionPasses() {
  PassRegistration<LowerToTargetPass>();
}

}  // namespace foo_project
}  // namespace mlir
