#include "foo-mlir/Dialect/Bar/Transforms/GroupedPasses.h"
#include "foo-mlir/Dialect/Bar/Transforms/Passes.h"

#include "mlir/Pass/PassManager.h"
#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace foo_project {

struct DefaultPipelineOptions : public PassPipelineOptions<DefaultPipelineOptions> {};

void registerDefaultPipeline() {
  PassPipelineRegistration<DefaultPipelineOptions>(
      "bar-default-pipeline",
      "Run the default bar pipeline",
      [](OpPassManager &pm, const DefaultPipelineOptions &) {
        pm.addPass(createExampleTransformPass());
      });
}

}  // namespace foo_project
}  // namespace mlir
