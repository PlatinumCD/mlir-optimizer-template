#include "foo-mlir/Dialect/Bar/Transforms/Passes.h"
#include "foo-mlir/Dialect/Bar/Transforms/ExampleTransform.h"
#include "foo-mlir/Dialect/Bar/Transforms/GroupedPasses.h"

#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace foo_project {

void registerBarPasses() {
  PassRegistration<ExampleTransformPass>();
  registerDefaultPipeline();
}

}  // namespace foo_project
}  // namespace mlir
