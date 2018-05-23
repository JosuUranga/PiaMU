#include "funtzioak.h"

void baseaAukeratu(int aukera) {

	switch(aukera) {
	case 1:
		metro();
		break;
	case 2:
		saxo();
		break;

	}
}

void metro(){
	if(!Mix_PausedMusic()) Mix_PausedMusic();
	musicUnload();
	loadTheMusic("bases/metronomo.wav");
}

void saxo(){
	if(!Mix_PausedMusic()) Mix_PausedMusic();
	musicUnload();
	loadTheMusic("bases/saxo.wav");
}

void instrumentuakAukeratu(int aukera) {

	switch(aukera) {
	case 1:
		piano();
		break;
	case 2:
		organo();
		break;
	case 3:
		guitarra();
		break;
	case 4:
		launchpad();
		break;
	}
}

void piano(){
	soundsUnload();

	loadSound("instrumentuak/piano/do1.wav");
	loadSound("instrumentuak/piano/re1.wav");
	loadSound("instrumentuak/piano/mi1.wav");
	loadSound("instrumentuak/piano/fa1.wav");
	loadSound("instrumentuak/piano/sol1.wav");
	loadSound("instrumentuak/piano/la1.wav");
	loadSound("instrumentuak/piano/si1.wav");
	loadSound("instrumentuak/piano/do2.wav");
}

void organo(){
	soundsUnload();

	loadSound("instrumentuak/organo/do1.wav");
	loadSound("instrumentuak/organo/re1.wav");
	loadSound("instrumentuak/organo/mi1.wav");
	loadSound("instrumentuak/organo/fa1.wav");
	loadSound("instrumentuak/organo/sol1.wav");
	loadSound("instrumentuak/organo/la1.wav");
	loadSound("instrumentuak/organo/si1.wav");
	loadSound("instrumentuak/organo/do2.wav");
}

void guitarra(){
	soundsUnload();

	loadSound("instrumentuak/guitarra/do1.wav");
	loadSound("instrumentuak/guitarra/re1.wav");
	loadSound("instrumentuak/guitarra/mi1.wav");
	loadSound("instrumentuak/guitarra/fa1.wav");
	loadSound("instrumentuak/guitarra/sol1.wav");
	loadSound("instrumentuak/guitarra/la1.wav");
	loadSound("instrumentuak/guitarra/si1.wav");
	loadSound("instrumentuak/guitarra/do2.wav");
}

void launchpad(){
	soundsUnload();

	loadSound("instrumentuak/launchpad/do1.wav");
	loadSound("instrumentuak/launchpad/re1.wav");
	loadSound("instrumentuak/launchpad/mi1.wav");
	loadSound("instrumentuak/launchpad/fa1.wav");
	loadSound("instrumentuak/launchpad/sol1.wav");
	loadSound("instrumentuak/launchpad/la1.wav");
	loadSound("instrumentuak/launchpad/si1.wav");
	loadSound("instrumentuak/launchpad/do2.wav");
}
