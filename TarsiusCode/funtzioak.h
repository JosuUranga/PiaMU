#ifndef FUNTZIOAK_H
#define FUNTZIOAK_H
#define MAX_KAR 120
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "SDL2/SDL_mixer.h"
typedef struct soinuakGrabatu{
  int soinua;
  struct soinuakGrabatu *hurrengoSoinua;
}SOINUAKGRABATU;

#endif
