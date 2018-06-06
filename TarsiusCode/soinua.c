#include "funtzioak.h"

Mix_Chunk* soinuak[MAX_SOUNDS];
int soinuKop = 0;
Mix_Music * musika=NULL;

void audioInit()
{
  if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
  {
    printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
    audioInit();
  }
}

int loadSound(char *fileName)
{
  if (soinuKop == MAX_SOUNDS) return -1;
  if((soinuak[soinuKop] = Mix_LoadWAV(fileName))==NULL)
  {
    printf("Failed to load low sound effect! SDL_mixer Error: %s\n", Mix_GetError());
    return -1;
  }
  soinuKop++;
  return soinuKop-1;
}

int loadTheMusic(char *fileName)
{
  int wasPlaying = 0;

  if (musika != NULL)
  {
    wasPlaying = (Mix_PlayingMusic() != 1);
    Mix_HaltMusic();
  }
  if ((musika = Mix_LoadMUS(fileName)) == NULL) return 0;
  if(wasPlaying)  Mix_PlayMusic(musika, -1);
  return 1;
}

int playSound(int idSound,int channel)
{
	printf("%i sakatuta\n",idSound);
  if ((idSound<=0)&&(idSound>=soinuKop)) return -1;

  Mix_PlayChannel(channel, soinuak[idSound], 0);
  return idSound;
}

int playMusic(void)
{
  if (musika != NULL)
  {
	Mix_VolumeMusic(40);
    Mix_PlayMusic(musika, -1);
    return 1;
  }
  return 0;
}

void toggleMusic(void)
{
  if (musika != NULL)
  {
    if (Mix_PlayingMusic() != 0)
    {
      if (Mix_PausedMusic()) Mix_ResumeMusic();
      else Mix_PauseMusic();
    }
    else playMusic();
  }
}

void musicUnload(void)
{
  if (musika != NULL)
  {
    Mix_HaltMusic();
    Mix_FreeMusic(musika);
  }
}

void soundsUnload()
{
  int i;

  for (i = 0; i < soinuKop; i++)
  {
    Mix_FreeChunk(soinuak[i]);
    soinuak[i] = NULL;
  }
  soinuKop = 0;
}

void audioTerminate(void)
{
  Mix_HaltChannel(-1);
  soundsUnload();
  musicUnload();
  Mix_Quit();
}

void initSound() {
	Mix_AllocateChannels(12);
	loadSound("instrumentuak/piano/do1.wav");
	loadSound("instrumentuak/piano/re1.wav");
	loadSound("instrumentuak/piano/mi1.wav");
	loadSound("instrumentuak/piano/fa1.wav");
	loadSound("instrumentuak/piano/sol1.wav");
	loadSound("instrumentuak/piano/la1.wav");
	loadSound("instrumentuak/piano/si1.wav");
	loadSound("instrumentuak/piano/do2.wav");
	loadSound("miren/pianoa.wav");
	loadSound("miren/ximon.wav");
	loadSound("miren/beep-09.wav");
	loadTheMusic("bases/metronomo.wav");
}
