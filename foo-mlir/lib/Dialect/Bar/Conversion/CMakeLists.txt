add_mlir_library(MLIRBarConversion
  Passes.cpp
  LowerToTarget.cpp

  LINK_LIBS PUBLIC
  BarIR
  MLIRIR
  MLIRPass
)

install(TARGETS MLIRBarConversion
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
