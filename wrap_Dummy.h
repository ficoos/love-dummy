#ifndef WRAP_DUMMY_H
#define WRAP_DUMMY_H

// LOVE
#include "common/config.h"
#include "common/runtime.h"

extern "C" LOVE_EXPORT int luaopen_dummy(lua_State *L);

#endif // WRAP_DUMMY_H
