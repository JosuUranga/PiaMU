#include "funtzioak.h"

int teklaDetekzioa(int notakSakatuta[],int modua,SOINUAKGRABATU **soinuak) {
	SDL_Event event;
	SDL_PollEvent(&event);
		switch (event.type)
		{
		case SDL_QUIT:
			modua = 0;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.scancode)
			{
			case SDL_SCANCODE_Q:
				modua = 0;
				break;
			case SDL_SCANCODE_A:
				if(notakSakatuta[0]==0){
					playSound(0,0);
					if(modua==2){
						soinuakGrabatu(0,soinuak);
						bistaratuSoinuak(*soinuak);
					}
					(notakSakatuta[0])=1;
				}
				break;
			case SDL_SCANCODE_S:
				if(notakSakatuta[1]==0){
				playSound(1,1);
				if(modua==2){
					soinuakGrabatu(1,soinuak);
				}
				notakSakatuta[1]=1;
				}
				break;
			case SDL_SCANCODE_D:
				if(notakSakatuta[2]==0){
				playSound(2,2);
				if(modua==2){
					soinuakGrabatu(2,soinuak);
				}
				notakSakatuta[2]=1;
				}
				break;
			case SDL_SCANCODE_F:
				if(notakSakatuta[3]==0){
				playSound(3,3);
				if(modua==2){
					soinuakGrabatu(3,soinuak);
				}
				notakSakatuta[3]=1;
				}
				break;
			case SDL_SCANCODE_G:
				if(notakSakatuta[4]==0){
				playSound(4,4);
				if(modua==2){
					soinuakGrabatu(4,soinuak);
				}
				notakSakatuta[4]=1;
				}
				break;
			case SDL_SCANCODE_H:
				if(notakSakatuta[5]==0){
				playSound(5,5);
				if(modua==2){
					soinuakGrabatu(5,soinuak);
				}
				notakSakatuta[5]=1;
				}
				break;
			case SDL_SCANCODE_J:
				if(notakSakatuta[6]==0){
				playSound(6,6);
				if(modua==2){
					soinuakGrabatu(6,soinuak);
				}
				notakSakatuta[6]=1;
				}
				break;
			case SDL_SCANCODE_K:
				if(notakSakatuta[7]==0){
				playSound(7,7);
				if(modua==2){
					soinuakGrabatu(7,soinuak);
				}
				notakSakatuta[7]=1;
				}
				break;
			case SDL_SCANCODE_W:
				modua=1;
				break;
			case SDL_SCANCODE_E:
				if(modua==2){
					modua=1;
				}else {
					if(*soinuak!=NULL)garbituZerrenda(soinuak);
					modua=2;
				}
				break;
			case SDL_SCANCODE_R:
				soinuaErreproduzitu(*soinuak);
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
  return modua;
}
