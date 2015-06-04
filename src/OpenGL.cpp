//============================================================================
// Name        : OpenGL.cpp
// Author      : KK
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <GL/glew.h>
#include "display.h"

using namespace std;

int main()
{
	Display display(800,600,"Hello World");

	while(!display.IsClosed())
	{
		glClearColor(0.0f, 0.15f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		display.SwapBuffers();
	}

	return 0;
}
