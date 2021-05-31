#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

//functions for welcome screen:
void time(){
	// current date/time based on current system
	time_t now = time(0);
	tm *ltm = localtime(&now);
	if (ltm->tm_min>9)
	cout<<"****\tTime: "<<ltm->tm_hour<<":"<<ltm->tm_min<<"\t\t\t\t\t\tDate: "<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year<< "\t ****"<< endl;
	else

	cout<<"****\tTime: "<<ltm->tm_hour<<":0"<<ltm->tm_min<<"\t\t\t\t\t\tDate: "<<ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900+ltm->tm_year<< "\t ****"<< endl;

}

void interface(){
	for(int i=0;i<3;i++)
		cout<<"*************************************------------------------************************************************"<< endl;

	for (int i = 0; i<20; i++){
		if (i == 2){
	   		time();
		}
	 	if (i == 6)
	 		cout<< "****\t\t       WELCOME TO APG POS SYSTEM\t\t\t ****"<< endl;
		else if(i == 15){
	 	 	cout<<"**** By:\t\t\t\t\t\t\t\t\t ****"<< endl;
		}
		else if(i == 16){
	 	 	cout<<"**** 1)Mervin M Rudolf (200602942)\t\t\t\t\t\t ****"<< endl;
		}
	 	else if(i == 17){
	 	 	cout<<"**** 2) Fillemon Frans  (219000131)\t\t\t\t\t\t\t ****"<< endl;
		}
		else if(i == 18){
	 	 	cout<<"**** 3) Ulrigh de Wee (219012547)\t\t\t\t\t\t\t ****"<< endl;
		}
		else if(i == 19){
	 	 	cout<<"**** 4) ...... ()\t\t\t\t\t\t\t ****"<< endl;

    }
            else {
	 		cout<<"****\t\t\t\t\t\t\t\t\t\t ****"<< endl;


	for(int i=0; i<3; i++)
		cout<<"*************************************************************************************"<< endl;

    }
}
}
