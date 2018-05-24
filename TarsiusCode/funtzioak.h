#ifndef FUNTZIOAK_H
#define FUNTZIOAK_H
#define MAX_KAR 120
#define MAX_SOUNDS 15
#define MAX_NOTAK 8
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_mixer.h"

typedef struct soinuakGrabatu{
  int soinua;
  clock_t noizSakatu;
  double diferentzia;
  struct soinuakGrabatu *hurrengoSoinua;
}SOINUAKGRABATU;

//Teklak detektatzeko
int teklaDetekzioa(int notakSakatuta[],int modua,SOINUAKGRABATU **soinuak);
//Grabatu eta erreproduzitu
void soinuakGrabatu(int nota,SOINUAKGRABATU **soinuak);
void sartuHasieran(SOINUAKGRABATU** burua, SOINUAKGRABATU *ptrBerria);
void sartuSoinuakBuztanean(SOINUAKGRABATU *burua, SOINUAKGRABATU*berria);
void bistaratuSoinuak(SOINUAKGRABATU* burua);
void bistaratuSoinuaBat(SOINUAKGRABATU pelikula);
void soinuaErreproduzitu(SOINUAKGRABATU *soinuak);
void garbituZerrenda(SOINUAKGRABATU** burua);
//Audio
void audioInit();
int loadSound(char *fileName);
int loadTheMusic(char *fileName);
int playSound(int idSound,int channel);
int playMusic(void);
void toggleMusic(void);
void musicUnload(void);
void soundsUnload();
void audioTerminate(void);
void initSound();
//Instrumentuak
void instrumentuakAukeratu(int aukera);
void piano();
void organo();
void guitarra();
void launchpad();
void ahotsak();
//Baseak
void baseaAukeratu(int aukera);
void metro();
void saxo();

#endif
