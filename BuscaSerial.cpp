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
 void busca(Pessoa pessoa[], int qtd){
 	int busca;
 	cout << "\nDigite um id que queira achar : ";
 	cin >> busca;
	for(int i = 0; i<qtd; i++){
 		if(busca == pessoa[i].id){
 			cout << "ACHOU!!!!!!!";
 			i=qtd;
		}else if(pessoa[i].id > busca || i == qtd){
			cout << "Não existe esse registro";
			i = qtd;
		}
	}
 }
int main(){
	int qtd = 0;
	cout << "\nDigite a quantidade de registros : ";
	cin >> qtd;
	Pessoa pessoa[qtd];
	ler(pessoa, qtd);
	imprimir(pessoa, qtd);
	busca(pessoa, qtd);
	
}
