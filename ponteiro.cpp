#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int *p, num;
	p = &num;
	*p = 10;
	cout << "Numero de memoria da variavel num = " << p;
	cout << "\nValor da variavel num = " << *p;
	cout << "\nValor da variavel num = " << num;
}
