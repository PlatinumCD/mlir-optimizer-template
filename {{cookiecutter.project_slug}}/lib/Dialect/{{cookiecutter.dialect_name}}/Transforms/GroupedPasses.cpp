#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/GroupedPasses.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/Passes.h"

#include "mlir/Pass/PassManager.h"
#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

struct DefaultPipelineOptions : public PassPipelineOptions<DefaultPipelineOptions> {};

void registerDefaultPipeline() {
  PassPipelineRegistration<DefaultPipelineOptions>(
      "{{cookiecutter.dialect_namespace}}-default-pipeline",
      "Run the default {{cookiecutter.dialect_namespace}} pipeline",
      [](OpPassManager &pm, const DefaultPipelineOptions &) {
        pm.addPass(createExampleTransformPass());
      });
}

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir
