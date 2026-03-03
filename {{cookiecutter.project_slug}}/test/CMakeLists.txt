configure_lit_site_cfg(
  ${CMAKE_CURRENT_SOURCE_DIR}/lit.site.cfg.py.in
  ${CMAKE_CURRENT_BINARY_DIR}/lit.site.cfg.py
  MAIN_CONFIG
  ${CMAKE_CURRENT_SOURCE_DIR}/lit.cfg.py
)

add_lit_testsuite(check-{{cookiecutter.project_slug}}
  "Running the {{cookiecutter.project_slug}} regression tests"
  ${CMAKE_CURRENT_SOURCE_DIR}
  DEPENDS {{cookiecutter.tool_name}}
)
