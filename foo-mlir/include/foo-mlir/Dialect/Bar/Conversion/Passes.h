#ifndef BAR_CONVERSION_PASSES_H
#define BAR_CONVERSION_PASSES_H

#include <memory>
#include "mlir/Pass/Pass.h"

namespace mlir {
namespace foo_project {

void registerBarConversionPasses();
std::unique_ptr<Pass> createLowerToTargetPass();

}  // namespace foo_project
}  // namespace mlir

#endif
