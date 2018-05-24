#include "funtzioak.h"

void soinuakGrabatu(int nota,SOINUAKGRABATU **soinuak){
  SOINUAKGRABATU *aux1;
  aux1=*(soinuak);
  SOINUAKGRABATU *aux2;
  aux2=(SOINUAKGRABATU*)malloc(sizeof(SOINUAKGRABATU));
  aux2->soinua=nota;
  aux2->hurrengoSoinua=NULL;
  if (aux1==NULL) {
    aux2->noizSakatu=clock();
    aux2->diferentzia=0;
    sartuHasieran(soinuak,aux2);
  }else  {
	aux2->noizSakatu=clock();
    sartuSoinuakBuztanean(*soinuak,aux2);
  }
}



void sartuHasieran(SOINUAKGRABATU** burua, SOINUAKGRABATU *ptrBerria) {
	ptrBerria->hurrengoSoinua = *burua;
	*(burua) = ptrBerria;
}
void sartuSoinuakBuztanean(SOINUAKGRABATU *burua, SOINUAKGRABATU*berria) {
	SOINUAKGRABATU*ptrAux = NULL;
	ptrAux = burua;
	while (ptrAux->hurrengoSoinua != NULL) {

		ptrAux = ptrAux->hurrengoSoinua;
	}
	berria->diferentzia=((double)(berria->noizSakatu - ptrAux->noizSakatu)/CLOCKS_PER_SEC);
	ptrAux->hurrengoSoinua = berria;
}

void bistaratuSoinuak(SOINUAKGRABATU* burua) {
	SOINUAKGRABATU* ptr;
	ptr = burua;
	while (ptr != NULL) {
		bistaratuSoinuaBat(*ptr);
		ptr = ptr->hurrengoSoinua;
	}
}
void bistaratuSoinuaBat(SOINUAKGRABATU pelikula) {
	printf("%i,%lf\n",pelikula.soinua,pelikula.diferentzia);
}


void soinuaErreproduzitu(SOINUAKGRABATU *soinuak){
	SOINUAKGRABATU* ptr;
	ptr = soinuak;

	while (ptr != NULL) {
		printf("%i\n",((int)((ptr->diferentzia)*1000)));
		SDL_Delay((int)((ptr->diferentzia)*1000));
		playSound(ptr->soinua,ptr->soinua);
		ptr = ptr->hurrengoSoinua;
	}
}

void garbituZerrenda(SOINUAKGRABATU** burua) {
  SOINUAKGRABATU* aux;
  SOINUAKGRABATU* freeptr;
  aux = *burua;
  while (aux->hurrengoSoinua != NULL) {
    freeptr = aux;
    aux = aux->hurrengoSoinua;
    free(freeptr);
  }
  *burua = NULL;
}
