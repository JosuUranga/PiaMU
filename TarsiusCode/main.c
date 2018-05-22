#include "funtzioak.h"


SDL_Window* window = NULL;
int main (void){
SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS);
window = SDL_CreateWindow(
	"Enter the MUngeons",
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	640,
	480,
	SDL_WINDOW_SHOWN
);
printf("Hello Tarsius Ander's change\n");
while(1){
	movement();
	SDL_Delay(1000/60);
}
SDL_DestroyWindow(window);
SDL_Quit();

return 0;
}

void movement(void) {
	// process events
	SDL_Event event;
	int w=0,s=0;
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
}
