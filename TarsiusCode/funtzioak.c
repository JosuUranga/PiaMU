#include "funtzioak.h"





void soinuakGrabatu(SOINUAKGRABATU soinuak){
  SOINUAKGRABATU *aux1;
  aux1=*(soinuak);
  SOINUAKGRABATU *aux2;
  aux2=NULL;
  if(soinuak!=NULL){
    while (aux1==NULL) {
      aux2=aux1->hurrengoSoinua;
      free(aux1);
      aux1=aux2;
    }
  }
  while (stop!=0) {
    instrumentuakAukeratu(instrumentua) // ELEGIR INSTRUMENTO
    instrumentuNotak(nota)      //ELEGIR NOTA DEPENDIENTE DEL INSTRUMENTO
    instrumentuaJo(instrumentua,nota); //TOCAR LA NOTA DEPENDIENDO DEL INSTRUMENTO Y NOTA
    aux1=(SOINUAKGRABATU)malloc(sizeof(SOINUAKGRABATU));
    if (aux==NULL) {
      sartuHasieran(aux,instrumentua,nota);
    }else  sartuBuztanean(aux1,instrumentua,nota)//IDENTIFICADOR DE LA TECLA
  }
}

void soinuaJo(){
 int instrumentua=instrumentuakAukeratu();
 int nota=instrumentuNotak();
 switch (instrumentua) {
   case 1:
   switch (nota) {
     case 1:
     break;
     case 2:
     break;
     case 3:
     break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     case 7:
     break;
     default:
     break;
   }
   break;
   case 2:
   switch (nota) {
     case 1:
     break;
     case 2:
     break;
     case 3:
     break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     case 7:
     break;
     default:
     break;
    }
   break;
   case 3:
   switch (nota) {
     case 1:
     break;
     case 2:
     break;
     case 3:
     break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     case 7:
     break;
     default:
     break;
    }
   break;
 }
}
