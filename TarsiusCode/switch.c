void pianoMenu(int aukera) {
	switch(aukera){
	case 1:
		soinuaGrabatu();
		break;
	case 2:
		soinuaErreproduzitu();
		break;
	case 3:
		instrumentuaJo();
		break;
	case 4:
		instrumentuaAldatu();
		break;
	}
}

void instrumentuNotak(int aukera) {

	switch(aukera) {
	case 1:
		doSoinua();
		break;
	case 2:
		reSoinua();
		break;
	case 3:
		miSoinua();
		break;
	case 4:
		faSoinua();
		break;
	case 5:
		solSoinua();
		break;
	case 6:
		laSoinua();
		break;
	case 7:
		siSoinua();
		break;
	}
}

void instrumentuakAukeratu(int aukera) {
	switch(aukera) {
	case 1:
		piano();
		break;

	}
}
