#include "DummyModule.h"

// LOVE
#include <modules/graphics/Graphics.h>

// C++
#include <iostream>


using namespace std;

Dummy Dummy::instance;

Dummy::Dummy()
{
	retain();
}

Dummy::~Dummy()
{
}

void Dummy::sayHello() const
{
	cout << "Hello World" << endl;
}

void Dummy::drawSquare() const
{
	// This is an example of how you can directly access a love module
	// without going through lua.
	auto g = Module::getInstance<love::graphics::Graphics>(M_GRAPHICS);
	g->rectangle(love::graphics::Graphics::DrawMode::DRAW_FILL,
			10, 10, 100, 100);
}
