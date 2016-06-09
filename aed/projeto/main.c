#include <stdio.h>
#include <stdlib.h>
//#include "functionsforinterfaces.h"
#include "menugmed.h"

int main(int argc, char *argv[]){

	int mod = 1;
	
	system("clear");

	while(mod != 0){
	
     
		switch(mod) {
			case 0:
				leave(&mod);
				break;
			case 1:
				mod = showMenu("textforinterfaces/menumain.txt");
				break;
				    
			case 2:
				ShowMsgAlert("textforinterfaces/alertconstruct.txt");
				mod = 1;
				break;
				    
			case 3:
				startGmed(&mod);
				break;

			case 4:
				ShowMsgAlert("textforinterfaces/alertconstruct.txt");
				mod = 1;
				break;

			default:
				ShowMsgAlert("Entrada invalida tente denovo!");
				mod = 1;
				break;
		}

		system("clear");

	}
}
