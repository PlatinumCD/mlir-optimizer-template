// RUN: foo-mlir-opt -pass-pipeline='builtin.module(func.func(bar-example-transform))' %s | FileCheck %s

func.func @transform_example() {
  %0 = arith.constant 7 : i32
  return
}

// CHECK: bar.wrap
// CHECK: bar.unwrap
