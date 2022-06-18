/*Execute novamente o programa, de modo que seja 
apresentado primeiro o número de alunas e depois
o número de alunos*/


#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int alunos, alunas, total;

    cout <<("Universidade Federal de Campina grande\n" );
    cout << ("Disciplina: Técnicas de Programação \n\n");
    cout << ("Insira a quantidade de alunos:");
        cin >> alunos;
    cout << ("Insira a quantidade de alunas:");
        cin >> alunas;
    total = alunos + alunas;
    cout << ("A quantidade total de alunos na disciplina é:");
    cout << total;

    return 0;
}

