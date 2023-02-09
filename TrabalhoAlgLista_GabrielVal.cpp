#include <iostream>
#include <conio.h>
#include <locale.h>
#define N 10
using namespace std;



struct dados {
	int idade,cod;
	float salario;
	char nome[30];
};

int final,aux;
dados val;
dados x[N];
char conf;

char menu();
char sair();
void inserirInicio();
void inserirNoFinal();
void removerNoInicio();
void removerNoFinal();
void imprimirCadastros();

int main(){
	setlocale(LC_ALL, "Portuguese");
	char opcao='N';
	while (opcao != 'S'){
		opcao = menu();
		switch (opcao) {
		  case '1' : { inserirInicio(); break; }
		  case '2' : { inserirNoFinal(); break; }
		  case '3' : { removerNoInicio(); break; }
		  case '4' : { removerNoFinal(); break; }
		  case '5' : { imprimirCadastros(); break; }
		  case 'S' : { opcao = sair(); break; }
		  default : { cout<<"\n\nOpcão invalida. Tecle algo para continuar...";
		              getch(); }
		}
	}
}
char menu(){
	char op;
    system("cls"); 
    cout<<"(1) - Inserir novo cadastro (prioritario)\n\n";
    cout<<"(2) - Inserir novo cadastro (sem prioridade)\n\n";
    cout<<"(3) - Remover primeiro cadastro da lista\n\n";
    cout<<"(4) - Remover ultimo cadastro da lista\n\n";
    cout<<"(5) - Todos os cadastros\n\n";
    cout<<"(S) - Sair do programa\n\n";
    cout<<"Escolha a opcao: ";
	op=toupper(getche());
	
	return op;
}
void inserirInicio(){
	system("cls");
	if(final < N-1){
		cout<<"Cadastro novo:\n";
		cout<<"Nome:";
		cin>>val.nome;
		cout<<"Id:";
		cin>>val.cod;
		cout<<"Idade:";
		cin>>val.idade;
		cout<<"Salário:";
		cin>>val.salario;
		final ++;
		aux = final;
		while (aux!=0){
			x[aux] = x[aux-1];
			aux--;
		}
		x[aux] = val;
	}
	else{
		cout<<"Overflow...";
	}
	
}
void inserirNoFinal(){
	system("cls");
	if(final < N-1){
		cout<<"\nCadastro novo:\n";
		cout<<"Nome:";
		cin>>val.nome;
		cout<<"Id:";
		cin>>val.cod;
		cout<<"Idade:";
		cin>>val.idade;
		cout<<"Salário:";
		cin>>val.salario;
		final++;
		x[final] = val;
	}
	else{
		cout<<"Overflow...";
	}
}
void removerNoInicio(){
	if(final > -1){
		aux = 0;
		cout<<"Id: "<<x[aux].nome;
		cout<<"Nome: "<<x[aux].cod;
		cout<<"Idade: "<<x[aux].idade;
		cout<<"Salário: "<<x[aux].salario<<"\n";
		
		cout<<"Confirmar operação?? (S/N)";
		cin>>conf;
		if(conf=='S'){
			while(aux!=final){
				x[aux] = x[aux+1];
				aux ++;
			}
			final--;	
		}
		else{
			cout<<"Não confirmou a operacao";
		}	
		}
		else{
		cout<<"Overflow...";
	}
	
	}

char sair(){
	char sair='N';
	cout<<"\n\nDeseja encerrar o programa? (S/N) : ";
	sair=toupper(getche());
	if (sair=='S') {
		cout<<"\n\nSaindo do programa...";
		getch();
		system("cls");
	} 
	return sair;
}
void removerNoFinal(){
	if(final > -1){
		val = x[final];
		cout <<"Ultimo cadastro\n";
		cout<<"Id: "<< val.nome;
		cout<<"Nome: "<< val.cod;
		cout<<"Idade: "<< val.idade;
		cout<<"Salário: "<< val.salario<<"\n";
		cout<<"Deseja excluir esse cadastro?(S/N)\n";
		cin >> conf;
		if(conf =='S'){
			final = final - 1;
		}else
			cout << "Não confirmou a operação";
	}else
		cout << "Lista vazia!!";
}
void imprimirCadastros(){
	if(final > -1){
		aux = 0;
		while(aux <= final){
			cout<<"Id: "<< x[aux].nome;
			cout<<"Nome: "<< x[aux].cod;
			cout<<"Idade: "<< x[aux].idade;
			cout<<"Salário: "<< x[aux].salario<<"\n";
			aux++;
		}
	}else
		cout << "Lista vazia!!";	
}

