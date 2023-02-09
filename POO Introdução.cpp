#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Aluno{
	public:
	//Atributos
	int ra;
	string nome;
	float n1;
	float n2;

	//Metodos
	float calcularMedia(){
		float md;
		md = (float)(n1 + n2)/2;
		return md;
	}
};


int main(){
	//Instanciando um objeto
	Aluno aluno1;
	cout << "Digite o nome : ";
	cin >> aluno1.nome;
	cout << "\nDigite o RA : ";
	cin >> aluno1.ra;
	cout << "\nDigite a Nota 1 do aluno : ";
	cin >> aluno1.n1;
	cout << "\nDigite a Nota 2 do aluno : ";
	cin >> aluno1.n2;
	cout << "\nO aluno(a) " << aluno1.nome << " do RA " << aluno1.ra << " teve a média = " << aluno1.calcularMedia();
}
