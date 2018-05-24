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
int modua=1;

audioInit();
initSound();
SOINUAKGRABATU *soinuak;
soinuak=NULL;
int notakSakatuta[MAX_SOUNDS];
for	(int i=0; i<MAX_SOUNDS;i++){
	notakSakatuta[i]=0;
}
printf("Hello Tarsius\n");

while(modua>0){
	modua=teklaDetekzioa(notakSakatuta,modua,&soinuak);

}

audioTerminate();
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}
