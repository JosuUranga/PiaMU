#include "funtzioak.h"

int teklaDetekzioa(int notakSakatuta[],int modua,SOINUAKGRABATU **soinuak, int *gameOver,SOINUAKGRABATU **soinuakSimon,int teklak[]) {
		if(digitalRead(teklak[8])){ //apagar
			modua = 0;
		}
		if(digitalRead(teklak[4])&&digitalRead(teklak[0])){ //1
	       if(notakSakatuta[10]==0){
	          instrumentuakAukeratu(1);
	          playSound(8,9);
	          notakSakatuta[10]=1;
	        }
		}
	       if(digitalRead(teklak[4])&&digitalRead(teklak[2])){ //2
	        if(notakSakatuta[11]==0){
	          instrumentuakAukeratu(2);
	          playSound(8,9);
	          notakSakatuta[11]=1;
	        }
	       }
	       if(digitalRead(teklak[4])&&digitalRead(teklak[1])){ //3
	        if(notakSakatuta[12]==0){
	          instrumentuakAukeratu(3);
	          playSound(8,9);
	          notakSakatuta[12]=1;
	        }
	       }
	       if(digitalRead(teklak[4])&&digitalRead(teklak[3])){ //4
		       if(notakSakatuta[13]==0){
		         instrumentuakAukeratu(4);
		         playSound(8,9);
		         notakSakatuta[13]=1;
		       }
	       }
	       if(digitalRead(teklak[4])&&digitalRead(teklak[5])){ //5
	        if(notakSakatuta[14]==0){
	          instrumentuakAukeratu(5);
	          playSound(8,9);
	          notakSakatuta[14]=1;
	        }
	       }
	       if(digitalRead(teklak[0])){ //a
			if(notakSakatuta[0]==0){
				playSound(0,0);
				if(modua==2){
					soinuakGrabatu(0,soinuak);
					bistaratuSoinuak(*soinuak);
				}
				if(modua == 3){
					if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 0);
				}
				(notakSakatuta[0])=1;
				SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[2])){ //s
			if(notakSakatuta[1]==0){
				playSound(1,1);
				if(modua==2){
					soinuakGrabatu(1,soinuak);
				}
				if(modua == 3){
					if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 1);
				}
				notakSakatuta[1]=1;
				SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[1])){ //d
			if(notakSakatuta[2]==0){
				playSound(2,2);
				if(modua==2){
					soinuakGrabatu(2,soinuak);
				}
				if(modua == 3){
					if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 2);
				}
				notakSakatuta[2]=1;
				SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[3])){ //f
			if(notakSakatuta[3]==0){
				playSound(3,3);
				if(modua==2){
					soinuakGrabatu(3,soinuak);
				}
				if(modua == 3){
					if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 3);
				}
				notakSakatuta[3]=1;
				SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[5])){ //g
			if(notakSakatuta[4]==0){
				playSound(4,4);
				if(modua==2){
					soinuakGrabatu(4,soinuak);
				}
				if(modua == 3){
					if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 4);
				}
				notakSakatuta[4]=1;
				SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[6])){ //h
			if(notakSakatuta[5]==0){
			playSound(5,5);
			if(modua==2){
				soinuakGrabatu(5,soinuak);
			}
			if(modua == 3){
				if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 5);
			}
			notakSakatuta[5]=1;
			SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[7])){ //j
			if(notakSakatuta[6]==0){
			playSound(6,6);
			if(modua==2){
				soinuakGrabatu(6,soinuak);
			}
			if(modua == 3){
				if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 6);
			}
			notakSakatuta[6]=1;
			SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[12])){ //k
			if(notakSakatuta[7]==0){
			playSound(7,7);
			if(modua==2){
				soinuakGrabatu(7,soinuak);
			}
			if(modua == 3){
				if(*gameOver==2) *gameOver = sartuSimon(*soinuakSimon, 7);
			}
			notakSakatuta[7]=1;
			SDL_Delay(50);
			}
	       }
	       if(digitalRead(teklak[10])){ //E
	    	if(notakSakatuta[8]==0){
			if(modua==2){
				gordeGrabazioa(*soinuak);
				modua=1;
				playSound(10,9);

			}else {
				if(*soinuak!=NULL)garbituZerrenda(soinuak);
				modua=2;
				playSound(10,9);
				SDL_Delay(200);
			}
			notakSakatuta[8]=1;
	    	}
	       }
	       if(digitalRead(teklak[11])){ //R
			if(notakSakatuta[9]==0){
			if(*soinuak!=NULL)garbituZerrenda(soinuak);
			irakurriGrabazioa(soinuak);
			if(*soinuak!=NULL)soinuaErreproduzitu(*soinuak);
			SDL_Delay(500);
			notakSakatuta[9]=1;
			}
	       }
	       if(digitalRead(teklak[13])&&digitalRead(teklak[1])){ //M
	    	  toggleMusic();
	       }
	       if(digitalRead(teklak[13])&&digitalRead(teklak[0])){ //M
			baseaAukeratu(1);
	       }
	       if(digitalRead(teklak[13])&&digitalRead(teklak[2])){ //X
			baseaAukeratu(2);
	       }
	       if(digitalRead(teklak[9])){//T
			if(modua != 3){
				modua = 3;
				gameOver=0;
			}
	       }

	       if(!digitalRead(teklak[10])){
	        notakSakatuta[8]=0;
	       }
	       if(!digitalRead(teklak[11])){
	        notakSakatuta[9]=0;
	       }
	       if(!digitalRead(teklak[4])&&!digitalRead(teklak[0])){
	        notakSakatuta[10]=0;
	       }
	       if(!digitalRead(teklak[4])&&!digitalRead(teklak[2])){
	        notakSakatuta[11]=0;
	       }
	       if(!digitalRead(teklak[4])&&!digitalRead(teklak[1])){
	        notakSakatuta[12]=0;
	       }
	       if(!digitalRead(teklak[4])&&!digitalRead(teklak[3])){
	        notakSakatuta[13]=0;
	       }
	       if(digitalRead(teklak[4])&&digitalRead(teklak[5])){
	    	   notakSakatuta[14]=0;
	       }
	        if(!digitalRead(teklak[0])){ //a
			*notakSakatuta=0;
	        }
	        if(!digitalRead(teklak[2])){ //s
			notakSakatuta[1]=0;
	        }
	        if(!digitalRead(teklak[1])){ //d
			notakSakatuta[2]=0;
	        }
	        if(!digitalRead(teklak[3])){ //f
			notakSakatuta[3]=0;
	        }
	        if(!digitalRead(teklak[5])){ //g
			notakSakatuta[4]=0;
	        }
	        if(!digitalRead(teklak[6])){ //h
			notakSakatuta[5]=0;
	        }
	        if(!digitalRead(teklak[7])){ //j
			notakSakatuta[6]=0;
	        }
	        if(!digitalRead(teklak[12])){ //k
			notakSakatuta[7]=0;
	        }
  return modua;
}
