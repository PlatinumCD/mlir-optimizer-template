add_mlir_dialect_library(BarIR
  BarBase.cpp
  BarOps.cpp

  DEPENDS
  BarIRIncGen

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRSupport
)

install(TARGETS BarIR
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
