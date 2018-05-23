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

int teklaDetekzioa(int notakSakatuta[],int modua,SOINUAKGRABATU **soinuak);
void pianoMenu(int aukera);
void instrumentuakAukeratu(int aukera);
void instrumentuNotak(int aukera);
void sartuHasieran(SOINUAKGRABATU** burua, SOINUAKGRABATU *ptrBerria);
void sartuSoinuakBuztanean(SOINUAKGRABATU *burua, SOINUAKGRABATU*berria);
void bistaratuSoinuak(SOINUAKGRABATU* burua);
void bistaratuSoinuaBat(SOINUAKGRABATU pelikula);
void soinuaErreproduzitu(SOINUAKGRABATU *soinuak);
void garbituZerrenda(SOINUAKGRABATU** burua);
#endif
