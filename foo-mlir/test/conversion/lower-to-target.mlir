// RUN: foo-mlir-opt -bar-lower-to-target %s | FileCheck %s

module {
  func.func @lowering_smoke() {
    return
  }
}

// CHECK: module
