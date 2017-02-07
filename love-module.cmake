# This describes your module, should be just one line
SET(MODULE_INFO "LOVE Dummy: A Dummy module for created as an example")

# This uniquely identifies your module.
# This also means that to access the module we need to `require('dummy')`
SET(MODULE_NAME "dummy")

# The CMake target to link in to love
SET(MODULE_TARGET "love-dummy")

# The Module name in the ModuleType registry
SET(MODULE_IDENT "DUMMY")
