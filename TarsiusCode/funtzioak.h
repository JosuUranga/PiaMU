#ifndef FUNTZIOAK_H
#define FUNTZIOAK_H
#define MAX_KAR 120
#define MAX_SOUNDS 15
#define MAX_NOTAK 8
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_mixer.h"

typedef struct soinuakGrabatu{
  int soinua;
  struct soinuakGrabatu *hurrengoSoinua;
}SOINUAKGRABATU;

int teklaDetekzioa(int notakSakatuta[]);
void pianoMenu(int aukera);
void instrumentuakAukeratu(int aukera);
void instrumentuNotak(int aukera);

#endif
