/*
 * display.h
 *
 *  Created on: Jun 4, 2015
 *      Author: kolan
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <string>
#include <SDL2/SDL.h>

class Display
{
public:
	Display(int height, int width, const std::string &title);
	virtual ~Display();
	void SwapBuffers();
	bool IsClosed();


private:
	//Display(const Display& display) {}
	//void operator=(const Display& display) {}
	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;

};

#endif /* DISPLAY_H_ */
