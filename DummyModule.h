/*
 * This is the C++ API portion of your module.
 */
#ifndef DUMMYMODULE_H
#define DUMMYMODULE_H

// LOVE
#include "common/Module.h"

using namespace love;

class Dummy: public Module
{
private:
	Dummy();

public:
	virtual ~Dummy();

	void sayHello() const;
	void drawSquare() const;

	// Implements Module.
	virtual ModuleType getModuleType() const
	{
		// Must be what you specfied in MODULE_IDENT
		return M_DUMMY;
	}

	virtual const char *getName() const
	{
		// Must be what you specfied in MODULE_NAME
		return "dummy";
	}

	static Dummy instance;
};

#endif /* DUMMYMODULE_H */
