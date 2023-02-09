#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
#define T 10

int main(){
	float v[T], soma=0;
	int i, c100=0, c50;
	setlocale(LC_ALL, "");
	for(i=0; i<T; i++){
		cout << "Digite o elemento v["<<i<<"] : ";
		cin>> v[i];
		
	}
	for(i=0; i<T; i++){
		if(v[i]> 100)
			c100++;
		if(v[i]< 50){
			c50++;
			soma = soma + v[i];
		}
	}
	if(c100 == 0)
		cout<< "\nNão existe elementos maiores que 100.";
	else
		cout<< "\nQuantidade de elementos maiores que 100 :"<< c100;
	if(c50 == 0)
		cout<< "\nNão existe elementos menores que 50.";
	else
		cout<< "\nQuantidade de elementos maiores que 50 :"<< c50;
}
