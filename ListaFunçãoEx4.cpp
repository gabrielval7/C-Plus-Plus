#include <iostream>
#include <conio.h>
using namespace std;
#define t 3

int i, j, m[t][t];

void lerMatriz();
void mostraMatriz();
void somaPares();
void divisiveisTres();

int main(){
	lerMatriz();
	system("cls");
	mostraMatriz();
	somaPares();
	divisiveisTres();
}

void lerMatriz(){
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			cout << "Digite um valor: \n";
			cin >> m[i][j];
		}
	}
}
void mostraMatriz(){
	cout << "MATRIZ:\n";
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			cout << m[i][j]<<"\t";
		}
		cout << "\n";
	}
}
void somaPares(){
	int soma=0;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(m[i][j] % 2 == 0)
				soma += m[i][j];
		}
	}
	cout << "\nSoma dos pares = " << soma;
}
void divisiveisTres(){
	int soma=0;
	for(i=0; i<t; i++){
		for(j=0; j<t; j++){
			if(m[i][j] % 3 == 0)
				soma += 1;
		}
	}
	cout << "\nNumeros divisiveis por 3 = " << soma;
}
