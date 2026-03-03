module {
  func.func @basic(%arg0: i32) -> i32 {
    %0 = "bar.wrap"(%arg0) : (i32) -> i32
    %1 = "bar.unwrap"(%0) : (i32) -> i32
    return %1 : i32
  }
}
