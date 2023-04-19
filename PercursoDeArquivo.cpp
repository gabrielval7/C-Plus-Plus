#include <iostream>
using namespace std;
struct Pessoa{
	int id;
	string nome;
	int cpf;	
};

void ler(Pessoa pessoa[], int qtd){
	for(int i = 0; i<qtd; i++){
		cout << "\nDigite o id : ";
		cin >> pessoa[i].id;
		cout << "\nDigite o nome : ";
		cin >> pessoa[i].nome;
		cout << "\nDigite o cpf : ";
		cin >> pessoa[i].cpf;
	}
}
 void imprimir(Pessoa pessoa[], int qtd){
 	for(int i = 0; i<qtd; i++){
 		cout << "\nID: " << pessoa[i].id;
	 	cout << "\nNome: " << pessoa[i].nome;
	 	cout << "\nCPF: " << pessoa[i].cpf;
	 }
 }
int main(){
	int qtd = 0;
	cout << "\nDigite a quantidade de registros : ";
	cin >> qtd;
	Pessoa pessoa[qtd];
	ler(pessoa, qtd);
	imprimir(pessoa, qtd);
	
}
