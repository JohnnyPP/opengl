/*
 * display.cpp
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#include "display.h"
#include <iostream>

Display::Display(int height, int width, const std::string &title)
{
	std::cout << "Hello OpenGL constructor" << std::endl;

}

Display::~Display()
{
	std::cout << "Hello OpenGL destructor" << std::endl;
}

