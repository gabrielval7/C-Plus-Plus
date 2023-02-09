#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
#define t 10

//Prototipos funções
void leituraVetor();
void mostraVetor();
void somaValores();
void multiplicacaoValores();
void raizValores();

//Variaveis globais
float v[t];
int i;


int main(){
	leituraVetor();
	system("cls");
	mostraVetor();
	somaValores();
	multiplicacaoValores();
	raizValores();
}

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
	cout << "VETOR:\n"; 
	while(i<t){
		cout << v[i] << "\t";
		i++;	
	}
}

void somaValores(){
	float soma=0;
	i=0;
	while(i<t){
		soma += v[i];
		i++;	
	}
	cout << "\nA soma dos valores : " << soma;
}
void multiplicacaoValores(){
	float multiplicacao=1;
	i=0;
	while(i<t){
		multiplicacao *= v[i];
		i++;	
	}
	cout << "\nA multiplicacao dos valores : " << multiplicacao;
}
void raizValores(){
	float raiz;
	for(i=0; i<t; i++){
		raiz = sqrt(v[i]);
		cout << "\n Raiz do " << i <<"° valor" << raiz;
	}
}
