/*um programa em C para o Ministério da
Saúde que o auxilie nas informações sobre a dengue
em Brasília. Esse programa deve receber os dados
sobre o número de casos suspeitos, o número de casos
confirmados e o número de mortes, apresentando a
tela*/


#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int suspeitos, confirmados, mortos;
    cout << ("Insira as seguintes informações sobre a dengue em Brasilia:\n\n");
    cout << (" Insira a quantidade de casos suspeitos:\n");
    cin >> suspeitos;
    cout << ("Insira a quantidade de casos confirmados:\n");
    cin >> confirmados;
    cout << ("Insira a quantidade de mortos:\n");
    cin >> mortos;
    cout << ("Informações sobre a dengue em Brasilia\n");
    cout << ("\nCasos suspeitos:\n");
    cout << (suspeitos);
    cout << ("\nCasos confirmados:\n");
    cout << (confirmados);
    cout << ("\nQuantidade de mortos:\n");
    cout << (mortos);
}


