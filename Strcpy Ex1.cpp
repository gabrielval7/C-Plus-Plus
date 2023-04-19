#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char copiaNome(char *nome1, char *nome2){
    strcpy(nome2, nome1); //Troca os valores do segundo para o primeiro
}
int main(){
    char nome1[20], nome2[20];
    gets(nome1);//O gets pega uma frase e não só uma palavra como o cinx
    gets(nome2);
    copiaNome(nome1, nome2);
    cout << nome2;
}
