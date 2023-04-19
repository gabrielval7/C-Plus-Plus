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
 	int ini = 0;
 	int fim = qtd-1;
 	int m = (ini+fim)/2;
 	int valor;
	cout << "\nQual valor deseja encontrar?";
 	cin >> valor;
 	
 	for(;fim >= ini && valor != pessoa[m].id; m =(ini + fim)/2){

 		if(valor > pessoa[m].id){
		 	ini = m + 1;
		}else{
		 	fim = m -1;
		}
	}	 
	if(valor == pessoa[m].id){
 		cout << "\nACHOU, RAPARIGA!!!!";	
	}else
		cout << "\nNÂO ACHOU, RAPARIGA!!!!";
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
