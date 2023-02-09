#include <iostream>
#include <conio.h>
using namespace std;

struct pessoa{
	char nome[30];
	int cpf, idade;
};
pessoa v[5];

void lerPessoa();
void mostraPessoa();

main(){
	lerPessoa();
	system("cls");
	mostraPessoa();
}

void lerPessoa(){
	for (int i= 0; i<5; i++){
		cout << "Digite o nome da " << i+1 << "° pessoa : \n";
		cin >> v[i].nome;
		cout << "Digite o cpf da " << i+1 << "° pessoa : \n";
		cin >> v[i].cpf;
		cout << "Digite a idade da " << i+1 << "° pessoa : \n";
		cin	>> v[i].idade;
	}
}
void mostraPessoa(){
	int i;
	for(i=0; i<5; i++){
		cout << "Informacoes da " << i+1 << "° pessoa:\n";
		cout << "Nome : " << v[i].nome << " Cpf : " << v[i].cpf << " Idade : " << v[i].idade << "\\n";
		
	}
}
