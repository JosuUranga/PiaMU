#include "funtzioak.h"

int teklaDetekzioa(int notakSakatuta[]) {
	int close_requested=1;
	SDL_Event event;
	SDL_PollEvent(&event);
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
				if(notakSakatuta[0]==0){
					playSound(0,0);
					(notakSakatuta[0])=1;
				}
				break;
			case SDL_SCANCODE_S:
				if(notakSakatuta[1]==0){
				playSound(1,1);
				notakSakatuta[1]=1;
				}
				break;
			case SDL_SCANCODE_D:
				if(notakSakatuta[2]==0){
				playSound(2,2);
				notakSakatuta[2]=1;
				}
				break;
			case SDL_SCANCODE_F:
				if(notakSakatuta[3]==0){
				playSound(3,3);
				notakSakatuta[3]=1;
				}
				break;
			case SDL_SCANCODE_G:
				if(notakSakatuta[4]==0){
				playSound(4,4);
				notakSakatuta[4]=1;
				}
				break;
			case SDL_SCANCODE_H:
				if(notakSakatuta[5]==0){
				playSound(5,5);
				notakSakatuta[5]=1;
				}
				break;
			case SDL_SCANCODE_J:
				if(notakSakatuta[6]==0){
				playSound(6,6);
				notakSakatuta[6]=1;
				}
				break;
			case SDL_SCANCODE_K:
				if(notakSakatuta[7]==0){
				playSound(7,7);
				notakSakatuta[7]=1;
				}
				break;
			default:
				break;
			}
			break;
			case SDL_KEYUP:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_A:
				*notakSakatuta=0;
				break;
			case SDL_SCANCODE_S:
				notakSakatuta[1]=0;
				break;
			case SDL_SCANCODE_D:
				notakSakatuta[2]=0;
				break;
			case SDL_SCANCODE_F:
				notakSakatuta[3]=0;
				break;
			case SDL_SCANCODE_G:
				notakSakatuta[4]=0;
				break;
			case SDL_SCANCODE_H:
				notakSakatuta[5]=0;
				break;
			case SDL_SCANCODE_J:
				notakSakatuta[6]=0;
				break;
			case SDL_SCANCODE_K:
				notakSakatuta[7]=0;
				break;
			default:
				break;
			}
			break;
		}
  return close_requested;
}
