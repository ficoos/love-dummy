/*
 * This file contains the Lua API for your module.
 * It follows the general Love Module conventions.
 */
#include "wrap_Dummy.h"

#include "DummyModule.h"

#include <iostream>

static int w_sayHello(lua_State *L)
{
	Dummy::instance.sayHello();
	return 0;
}

static int w_drawSquare(lua_State *L)
{
	Dummy::instance.drawSquare();
	return 0;
}

// List of functions to wrap.
static const luaL_Reg functions[] =
{
	{ "sayHello", w_sayHello },
	{ "drawSquare", w_drawSquare },
	{ 0, 0 }
};

static const lua_CFunction types[] =
{
	0
};

// This is the loader function
// it's name must be `luaopen__<MODULE_NAME>` or `loveopen_<MODULE_NAME>
extern "C" int luaopen_dummy(lua_State *L)
{
	WrappedModule w;
	w.module = &Dummy::instance;
	w.name = "dummy";
	w.type = &Module::type;
	w.functions = functions;
	w.types = types;

	return luax_register_module(L, w);
}


