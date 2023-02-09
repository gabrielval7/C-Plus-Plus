#include<iostream>
#include<conio.h>
using namespace std;

float fatorial(float);

int main(){
	float num;
	cout << "Digite um valor para saber seu fatorial :\n";
	cin >> num;
	float fat = fatorial(num);
	cout << "Fatorial de " << num << " \202 : " << fat;
}

float fatorial(float num){
	float f=1;
	for(int i =1; i<=num; i++)
	f = f * i;
	return f;
}

