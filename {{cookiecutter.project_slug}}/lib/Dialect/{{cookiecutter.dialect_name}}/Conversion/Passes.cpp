#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Conversion/Passes.h"
#include "{{cookiecutter.include_prefix}}/Dialect/{{cookiecutter.dialect_name}}/Conversion/LowerToTarget.h"

#include "mlir/Pass/PassRegistry.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

void register{{cookiecutter.dialect_name}}ConversionPasses() {
  PassRegistration<LowerToTargetPass>();
}

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir
