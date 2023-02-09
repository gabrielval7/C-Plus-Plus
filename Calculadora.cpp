#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int opcao;
	float num1, num2, resultado;
	cout << "\t------------BEM VINDO A CALCULADORA------------\n";
	cout << "VOCE TEM A OPCAO DE SOMAR, SUBTRAIR, MULTIPLICAR E DIVIDIR\n";
	cout << "DIGITE 1(SOMA), 2(SUBTRACAO), 3(MULTIPLICACAO) ou 4(DIVISAO)\n";
	cin >> opcao;
	do{

		if(opcao == 1){
			cout << "Digite o primeiro numero\n";
			cin >> num1;
			cout << "Digite o segundo numero\n";
			cin >> num2;
			resultado = num1 + num2;
			cout << "O RESULTADO = " << resultado << "\n";
			
		}else if(opcao == 2){
			cout << "Digite o primeiro numero\n";
			cin >> num1;
			cout << "Digite o segundo numero\n";
			cin >> num2;
			resultado = num1 - num2;
			cout << "O RESULTADO = " << resultado << "\n";
		}else if(opcao == 3){
			cout << "Digite o primeiro numero\n";
			cin >> num1;
			cout << "Digite o segundo numero\n";
			cin >> num2;
			resultado = num1 * num2;
			cout << "O RESULTADO = " << resultado << "\n";
		}else if(opcao == 4){
			cout << "Digite o primeiro numero\n";
			cin >> num1;
			cout << "Digite o segundo numero\n";
			cin >> num2;
			resultado = num1 / num2;
			cout << "O RESULTADO = " << resultado << "\n";
		}else{
			cout << "COMANDO INVALIDO!!!!\n";
		}
		cout << "DIGITE 1(SOMA), 2(SUBTRACAO), 3(MULTIPLICACAO), 4(DIVISAO) ou 0(PARA FINALIZAR)\n";
		cin >> opcao;
	}while(opcao != 0);
	system("cls");
	cout << "Obrigado por usar ;)\n";
	
		
}
