#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float A[5], B[5], C[5];
	for(int i=0; i<5; i++){
		cout << "Digite o elemento A["<<i<<"] : ";
		cin>> A[i];
	}
	for(int i=0; i<5; i++){
		cout << "Digite o elemento B["<<i<<"] : ";
		cin>> B[i];
	}
	for(int i=0; i<5; i++){
		C[i] = A[i] + B[i];
		cout<< "\n Vetor C["<<i<<"] :" << C[i];
	}
	
	}
