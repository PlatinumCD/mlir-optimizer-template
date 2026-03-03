#ifndef {{cookiecutter.dialect_name | upper}}_TRANSFORMS_PASSES_H
#define {{cookiecutter.dialect_name | upper}}_TRANSFORMS_PASSES_H

#include <memory>
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

void register{{cookiecutter.dialect_name}}Passes();
std::unique_ptr<Pass> createExampleTransformPass();

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir

#endif
