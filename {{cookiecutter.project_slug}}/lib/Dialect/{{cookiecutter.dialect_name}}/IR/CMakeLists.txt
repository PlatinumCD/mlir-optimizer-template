add_mlir_dialect_library({{cookiecutter.dialect_name}}IR
  {{cookiecutter.dialect_name}}Base.cpp
  {{cookiecutter.dialect_name}}Ops.cpp

  DEPENDS
  {{cookiecutter.dialect_name}}IRIncGen

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRSupport
)

install(TARGETS {{cookiecutter.dialect_name}}IR
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
