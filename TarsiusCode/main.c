#include "funtzioak.h"


int main (void){
SDL_Window* window = NULL;

SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS);
window = SDL_CreateWindow(
	"PianoTarsius",
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	0,
	0,
	SDL_WINDOW_SHOWN
);
int closeRequested=1;
printf("Hello Tarsius\n");
while(closeRequested){
	closeRequested=teklaDetekzioa();
	SDL_Delay(1000/60);
}
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}
