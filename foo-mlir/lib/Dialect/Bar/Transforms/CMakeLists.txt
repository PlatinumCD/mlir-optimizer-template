add_mlir_library(MLIRBarTransforms
  Passes.cpp
  GroupedPasses.cpp
  ExampleTransform.cpp

  LINK_LIBS PUBLIC
  BarIR
  MLIRArithDialect
  MLIRFuncDialect
  MLIRIR
  MLIRPass
)

install(TARGETS MLIRBarTransforms
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
