module {
  func.func @basic(%arg0: i32) -> i32 {
    %0 = "{{cookiecutter.dialect_namespace}}.wrap"(%arg0) : (i32) -> i32
    %1 = "{{cookiecutter.dialect_namespace}}.unwrap"(%0) : (i32) -> i32
    return %1 : i32
  }
}
