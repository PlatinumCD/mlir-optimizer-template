add_mlir_library(MLIR{{cookiecutter.dialect_name}}Conversion
  Passes.cpp
  LowerToTarget.cpp

  LINK_LIBS PUBLIC
  {{cookiecutter.dialect_name}}IR
  MLIRIR
  MLIRPass
)

install(TARGETS MLIR{{cookiecutter.dialect_name}}Conversion
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
