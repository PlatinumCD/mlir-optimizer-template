#ifndef BAR_TRANSFORMS_PASSES_H
#define BAR_TRANSFORMS_PASSES_H

#include <memory>
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace foo_project {

void registerBarPasses();
std::unique_ptr<Pass> createExampleTransformPass();

}  // namespace foo_project
}  // namespace mlir

#endif
