#include "funtzioak.h"



int main (void){
printf("Hello Tarsius Ander's change\n");
movement();
getchar();
return 0;
}

void movement(void) {
	// process events
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_1:
				break;
			case SDL_SCANCODE_2:
				break;
			case SDL_SCANCODE_W:
				printf("w");
			case SDL_SCANCODE_UP:
				break;
			case SDL_SCANCODE_A:
			case SDL_SCANCODE_LEFT:
				break;
			case SDL_SCANCODE_S:
			case SDL_SCANCODE_DOWN:
				break;
			case SDL_SCANCODE_D:
			case SDL_SCANCODE_RIGHT:
				break;
			case SDL_SCANCODE_ESCAPE:
				break;
			}
			default:
				break;
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
				break;
			case SDL_SCANCODE_A:
			case SDL_SCANCODE_LEFT:
				break;
			case SDL_SCANCODE_S:
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

}
