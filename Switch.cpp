#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int opcao, sair=0;
	while(sair==0){
		system("cls");
		cout << "\t\t\tOPCAO";
		cout << "\n\n\t\t 1 - Ler o vetor";
		cout << "\n\n\t\t 2 - Opcao 2";
		cout << "\n\n\t\t 3 - Opcao 3";
		cout << "\n\n\t\t 4 - Sair";
		cin >> opcao;
		switch(opcao){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				sair=1;
				system("cls");
				break;
			}
			default:{
				cout << "\n\n\t\t OPCAO INVALIDA, TECLE ALGO...";
				getch();
				break;
			}
		}
		return(0);
		
	}
	
}

