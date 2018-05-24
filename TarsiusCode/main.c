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
srand((unsigned int)time(0));
int modua=1;
int gameOver = 0;
audioInit();
initSound();
SOINUAKGRABATU *soinuak=NULL;
SOINUAKGRABATU *soinuakSimon=NULL;
int notakSakatuta[MAX_NOTAK];
for	(int i=0; i<MAX_NOTAK;i++){
	notakSakatuta[i]=0;
}
printf("Hello Tarsius\n");

while(modua>0){
	modua=teklaDetekzioa(notakSakatuta,modua,&soinuak, &gameOver, &soinuakSimon);
	if(modua == 3){
		gameOver = simon(gameOver, &soinuakSimon);
		if(gameOver == 1){
		modua=1;
		}
	}
}

audioTerminate();
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}
