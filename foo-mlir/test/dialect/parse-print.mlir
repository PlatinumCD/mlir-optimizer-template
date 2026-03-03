// RUN: foo-mlir-opt %s | FileCheck %s

func.func @parse_example(%arg0: i32) -> i32 {
  %0 = "bar.wrap"(%arg0) : (i32) -> i32
  %1 = "bar.unwrap"(%0) : (i32) -> i32
  return %1 : i32
}

// CHECK: bar.wrap
// CHECK: bar.unwrap
