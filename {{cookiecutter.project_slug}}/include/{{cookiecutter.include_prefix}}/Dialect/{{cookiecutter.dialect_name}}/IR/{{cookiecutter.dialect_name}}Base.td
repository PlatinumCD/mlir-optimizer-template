#ifndef {{cookiecutter.dialect_name | upper}}_BASE_TD
#define {{cookiecutter.dialect_name | upper}}_BASE_TD

include "mlir/IR/AttrTypeBase.td"
include "mlir/IR/OpBase.td"

def {{cookiecutter.dialect_name}}_Dialect : Dialect {
  let name = "{{cookiecutter.dialect_namespace}}";
  let cppNamespace = "::mlir::{{cookiecutter.cpp_namespace}}";
}

class {{cookiecutter.dialect_name}}_Type<string name, string typeMnemonic>
    : TypeDef<{{cookiecutter.dialect_name}}_Dialect, name> {
  let mnemonic = typeMnemonic;
}

class {{cookiecutter.dialect_name}}_Op<string mnemonic, list<Trait> traits = []>
    : Op<{{cookiecutter.dialect_name}}_Dialect, mnemonic, traits>;

#endif
