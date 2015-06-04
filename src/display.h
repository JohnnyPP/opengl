/*
 * display.h
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <string>

class Display
{
public:
	Display(int height, int width, const std::string &title);
	virtual ~Display();
private:
	//Display(const Display& display) {}
	//void operator=(const Display& display) {}
};

#endif /* DISPLAY_H_ */
