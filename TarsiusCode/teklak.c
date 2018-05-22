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
			case SDL_SCANCODE_1:
				break;
			case SDL_SCANCODE_2:
				break;
			case SDL_SCANCODE_W:
			case SDL_SCANCODE_UP:
				w=1;
				break;
			case SDL_SCANCODE_A:
			case SDL_SCANCODE_LEFT:
				break;
			case SDL_SCANCODE_S:
				s=1;
			case SDL_SCANCODE_DOWN:
				break;
			case SDL_SCANCODE_D:
			case SDL_SCANCODE_RIGHT:
				break;
			case SDL_SCANCODE_ESCAPE:
				break;
			default:
				break;
			}
			break;

		case SDL_KEYUP:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_1:
				break;
			case SDL_SCANCODE_2:
				break;
			case SDL_SCANCODE_W:
			case SDL_SCANCODE_UP:
				w=0;
				break;
			case SDL_SCANCODE_A:
			case SDL_SCANCODE_LEFT:
				break;
			case SDL_SCANCODE_S:
				s=0;
			case SDL_SCANCODE_DOWN:
				break;
			case SDL_SCANCODE_D:
			case SDL_SCANCODE_RIGHT:
				break;
			case SDL_SCANCODE_ESCAPE:
				break;
			default:
				break;
			}
			break;
		}
	}
  return close_requested;
}
