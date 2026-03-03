add_mlir_library(MLIR{{cookiecutter.dialect_name}}Transforms
  Passes.cpp
  GroupedPasses.cpp
  ExampleTransform.cpp

  LINK_LIBS PUBLIC
  {{cookiecutter.dialect_name}}IR
  MLIRArithDialect
  MLIRFuncDialect
  MLIRIR
  MLIRPass
)

install(TARGETS MLIR{{cookiecutter.dialect_name}}Transforms
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
