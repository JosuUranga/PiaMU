#ifndef FUNTZIOAK_H
#define FUNTZIOAK_H
#define MAX_KAR 120
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_main.h"
#include "SDL2/SDL_mixer.h"
#include "SDL2/SDL_events.h"
typedef struct soinuakGrabatu{
  int soinua;
  struct soinuakGrabatu *hurrengoSoinua;
}SOINUAKGRABATU;
void movement(void);
#endif
