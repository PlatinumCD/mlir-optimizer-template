// RUN: {{cookiecutter.tool_name}} -pass-pipeline='builtin.module(func.func({{cookiecutter.dialect_namespace}}-example-transform))' %s | FileCheck %s

func.func @transform_example() {
  %0 = arith.constant 7 : i32
  return
}

// CHECK: {{cookiecutter.dialect_namespace}}.wrap
// CHECK: {{cookiecutter.dialect_namespace}}.unwrap
