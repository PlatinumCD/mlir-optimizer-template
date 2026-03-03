add_llvm_executable({{cookiecutter.tool_name}}
  {{cookiecutter.tool_name}}.cpp
)

llvm_update_compile_flags({{cookiecutter.tool_name}})

target_link_libraries({{cookiecutter.tool_name}} PRIVATE
  {{cookiecutter.dialect_name}}IR
  MLIR{{cookiecutter.dialect_name}}Transforms
  MLIR{{cookiecutter.dialect_name}}Conversion
  MLIRArithDialect
  MLIRFuncDialect
  MLIRIR
  MLIRParser
  MLIRPass
  MLIRSupport
  MLIROptLib
)

install(TARGETS {{cookiecutter.tool_name}}
  RUNTIME DESTINATION bin
)
