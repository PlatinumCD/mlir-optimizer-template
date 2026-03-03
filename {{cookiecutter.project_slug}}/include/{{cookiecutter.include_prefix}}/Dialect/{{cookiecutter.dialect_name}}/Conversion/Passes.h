#ifndef {{cookiecutter.dialect_name | upper}}_CONVERSION_PASSES_H
#define {{cookiecutter.dialect_name | upper}}_CONVERSION_PASSES_H

#include <memory>
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

void register{{cookiecutter.dialect_name}}ConversionPasses();
std::unique_ptr<Pass> createLowerToTargetPass();

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir

#endif
