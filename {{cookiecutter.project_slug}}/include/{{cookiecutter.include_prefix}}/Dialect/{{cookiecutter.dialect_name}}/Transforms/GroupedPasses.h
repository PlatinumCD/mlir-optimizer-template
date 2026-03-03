#ifndef {{cookiecutter.dialect_name | upper}}_GROUPED_PASSES_H
#define {{cookiecutter.dialect_name | upper}}_GROUPED_PASSES_H

namespace mlir {
namespace {{cookiecutter.cpp_namespace}} {

void registerDefaultPipeline();

}  // namespace {{cookiecutter.cpp_namespace}}
}  // namespace mlir

#endif
