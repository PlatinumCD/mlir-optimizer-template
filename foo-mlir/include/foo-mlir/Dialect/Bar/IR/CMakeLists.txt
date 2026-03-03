set(LLVM_TARGET_DEFINITIONS Bar.td)

mlir_tablegen(BarBase.h.inc -gen-dialect-decls -dialect=bar)
mlir_tablegen(BarBase.cpp.inc -gen-dialect-defs -dialect=bar)
mlir_tablegen(BarOps.h.inc -gen-op-decls)
mlir_tablegen(BarOps.cpp.inc -gen-op-defs)

add_public_tablegen_target(BarIRIncGen)
