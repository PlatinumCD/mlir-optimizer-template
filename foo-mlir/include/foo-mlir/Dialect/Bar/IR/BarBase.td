#ifndef BAR_BASE_TD
#define BAR_BASE_TD

include "mlir/IR/AttrTypeBase.td"
include "mlir/IR/OpBase.td"

def Bar_Dialect : Dialect {
  let name = "bar";
  let cppNamespace = "::mlir::foo_project";
}

class Bar_Type<string name, string typeMnemonic>
    : TypeDef<Bar_Dialect, name> {
  let mnemonic = typeMnemonic;
}

class Bar_Op<string mnemonic, list<Trait> traits = []>
    : Op<Bar_Dialect, mnemonic, traits>;

#endif
