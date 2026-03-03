import os
import lit.formats

from lit.llvm import llvm_config

config.name = "{{cookiecutter.project_slug}}"
config.test_format = lit.formats.ShTest(not llvm_config.use_lit_shell)
config.suffixes = [".mlir"]
config.test_source_root = os.path.dirname(__file__)
config.test_exec_root = os.path.join(config.{{cookiecutter.project_slug | replace('-', '_')}}_obj_root, "test")

llvm_config.with_environment("PATH", config.llvm_tools_dir, append_path=True)
llvm_config.with_environment("PATH", config.{{cookiecutter.project_slug | replace('-', '_')}}_tools_dir, append_path=True)
