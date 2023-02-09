#include <iostream>
#include <conio.h>
using namespace std;
#define t 5

int v[t], i;

void leituraVetor(){
	i=0;
	while(i<t){
		cout << "Digite um numero: \n";
		cin >> v[i];
		i++;
	}
}
void mostraVetor(){
	i=0;
	cout << "\n"; 
	while(i<t){
		cout << v[i] << "\t";
		i++;	
	}
}

void maiorValor(){
	i=0;
	int maior=v[i];
	while(i<t){
		if(v[i]> maior)
			maior = v[i];
		i++;	
	}
	cout << "\nMaior valor é : " << maior;
}
void menorValor(){
	i=0;
	int menor=v[i];
	while(i<t){
		if(v[i]< menor)
			menor = v[i];
		i++;	
	}
	cout << "\nMenor valor é : " << menor;
}

int main(){
	leituraVetor();
	mostraVetor();
	maiorValor();
	menorValor();
	
}
