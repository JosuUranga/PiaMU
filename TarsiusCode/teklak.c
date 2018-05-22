#include "funtzioak.h"

int teklaDetekzioa(void) {
	int close_requested=1;
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			close_requested = 0;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_Q:
				close_requested = 0;
				break;
			case SDL_SCANCODE_A:
				playSound(0);
				break;
			case SDL_SCANCODE_S:
				playSound(1);
				break;
			case SDL_SCANCODE_D:
				playSound(2);
				break;
			case SDL_SCANCODE_F:
				playSound(3);
				break;
			case SDL_SCANCODE_G:
				playSound(4);
				break;
			case SDL_SCANCODE_H:
				playSound(5);
				break;
			case SDL_SCANCODE_J:
				playSound(6);
				break;
			case SDL_SCANCODE_K:
				playSound(7);
				break;
			default:
				break;
			}
			break;

		case SDL_KEYUP:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_A:
				break;
			case SDL_SCANCODE_S:
				break;
			case SDL_SCANCODE_D:
				break;
			case SDL_SCANCODE_F:
				break;
			case SDL_SCANCODE_G:
				break;
			case SDL_SCANCODE_H:
				break;
			case SDL_SCANCODE_J:
				break;
			case SDL_SCANCODE_K:
				break;
			default:
				break;
			}
			break;
		}
	}
  return close_requested;
}
