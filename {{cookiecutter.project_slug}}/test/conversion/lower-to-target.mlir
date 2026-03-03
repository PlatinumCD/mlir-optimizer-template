// RUN: {{cookiecutter.tool_name}} -{{cookiecutter.dialect_namespace}}-lower-to-target %s | FileCheck %s

module {
  func.func @lowering_smoke() {
    return
  }
}

// CHECK: module
