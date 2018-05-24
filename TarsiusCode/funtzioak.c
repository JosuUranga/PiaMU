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
int simon(int gameOver,SOINUAKGRABATU **soinuakSimon){
	SOINUAKGRABATU*aux;
	SOINUAKGRABATU*aux2=*soinuakSimon;
	aux=(SOINUAKGRABATU*)malloc(sizeof(SOINUAKGRABATU));
	int x;
	if(gameOver==0){
		x=rand()%8;
		aux->diferentzia=0.5;
		aux->soinua=x;
		printf("%d\n",x);
		aux->hurrengoSoinua=NULL;
		if(aux2 == NULL) {
			printf("nepe\n");
			sartuHasieran(soinuakSimon,aux);
		}
		else{

			sartuSoinuakBuztanean(*soinuakSimon,aux);
			printf("gordocabron\n");
		}
		soinuaErreproduzitu(*soinuakSimon);
		gameOver=2;
	}
	return gameOver;
}
int sartuSimon(SOINUAKGRABATU *soinuakSimon, int nota){
	SOINUAKGRABATU *aux = soinuakSimon;
	int gameOver=2;
	while(aux->hurrengoSoinua != NULL) aux=aux->hurrengoSoinua;
	aux->noizSakatu=(clock_t)nota;
	aux=soinuakSimon;
	while(aux!=NULL && aux->soinua == (int)aux->noizSakatu){
		aux= aux->hurrengoSoinua;
		gameOver =0;
	}
	if(aux!=NULL){
	if(aux->soinua != (int)aux->noizSakatu){
		gameOver =1;
	}
	}
	printf("%d\n",gameOver);
	return gameOver;
}
