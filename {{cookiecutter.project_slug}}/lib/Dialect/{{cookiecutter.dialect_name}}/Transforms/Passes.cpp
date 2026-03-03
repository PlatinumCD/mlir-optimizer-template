#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/Passes.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/ExampleTransform.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Transforms/GroupedPasses.h"

#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

void register{{cookiecutter.dialect_name}}Passes() {
  PassRegistration<ExampleTransformPass>();
  registerDefaultPipeline();
}

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir
