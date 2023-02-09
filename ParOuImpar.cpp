#include <iostream>
#include <conio.h>
using namespace std;	

int main(){
	int num, q, r;
	cout << "Digite um numero\n";
	cin >> num;
	q = num/2;
	r = num- q* 2;
	if(r==0)
		cout << "Numero par";
	else
		cout << "Numero impar";
		
}
