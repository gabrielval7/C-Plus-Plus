#include<conio.h>
#include<iostream>
#define T 10
using namespace std;
int inicio, fim, v[T];

void iniciarFila(){
	inicio=0;
	fim =-1;
}
void inserirFila(int valor){
	if(fim < T-1){
		fim++;
		v[fim] = valor;
	}
	else{
		cout << "\nFila Cheia";
		getch();
	}
}

void removerFila(){
	if(inicio > fim){
		cout << "Fila cheia\n";
		getch();
	}else{
		inicio++;
		if(inicio > fim){
			iniciarFila();
		}
	}
	
}

void consultarFila(){
	if(inicio > fim){
		cout << "\nFila Vazia";
		getch();
	}
	else{
		cout << "\nTopo da Fila: " << v[inicio];
	}	
}
int main(){
	iniciarFila();
	inserirFila(5);
	inserirFila(2);
	inserirFila(10);
	consultarFila();
	removerFila();
	consultarFila();
	removerFila();
	consultarFila();
	inserirFila(50);
	consultarFila();
	getch();		

}
