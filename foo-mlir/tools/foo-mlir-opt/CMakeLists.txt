add_llvm_executable(foo-mlir-opt
  foo-mlir-opt.cpp
)

llvm_update_compile_flags(foo-mlir-opt)

target_link_libraries(foo-mlir-opt PRIVATE
  BarIR
  MLIRBarTransforms
  MLIRBarConversion
  MLIRArithDialect
  MLIRFuncDialect
  MLIRIR
  MLIRParser
  MLIRPass
  MLIRSupport
  MLIROptLib
)

install(TARGETS foo-mlir-opt
  RUNTIME DESTINATION bin
)
