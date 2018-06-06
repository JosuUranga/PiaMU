#include "funtzioak.h"


int main (void){

SDL_Init(SDL_INIT_AUDIO);
int PIN[]={7,0,1,2,3,4,5,6,27,23,22,26,21,25};
if (wiringPiSetup() < 0)return 1 ;

for	(int i=0;i<15;i++){
	pinMode(PIN[i],INPUT);
	pullUpDnControl(PIN[i], PUD_UP);
}
srand((unsigned int)time(0));
int modua=1;
int gameOver = 0;
audioInit();
initSound();
playSound(8,9); //Pianoa Hasieratuta
SOINUAKGRABATU *soinuak=NULL;
SOINUAKGRABATU *soinuakSimon=NULL;
int notakSakatuta[MAX_TEKLAK];
for	(int i=0; i<MAX_TEKLAK;i++){
	notakSakatuta[i]=0;
}
while(modua>0){
	modua=teklaDetekzioa(notakSakatuta,modua,&soinuak, &gameOver, &soinuakSimon,PIN);
	if(modua == 3){
		gameOver = simon(gameOver, &soinuakSimon);
		if(gameOver == 1){
		garbituZerrenda(&soinuakSimon);
		modua=1;
		gameOver =0;
		}
	}
}
audioTerminate();
SDL_Quit();
system("reboot");
return 0;
}
