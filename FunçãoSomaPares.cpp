#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

void lerVetor();
int somaPares();

int v[20];

int main(){
	lerVetor();
	int soma = somaPares();	
	cout << "A soma dos pares = " << soma;
}

void lerVetor(){
	for(int i=0; i<20; i++){
		cout << "Digite um valor: \n";
		cin >>v[i];	
	}
}

int somaPares(){
	int soma=0;
	for(int i =0; i<20; i++){
		if(v[i] % 2 == 0){
			soma += v[i];
	}
	}
	return soma;	
}


