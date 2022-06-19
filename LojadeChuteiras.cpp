/*Escreva um programa que leia o número de
chuteiras de uma loja de esporte. Os valores deverão
ser inseridos por meio do teclado. Como saída, o
programa deve apresentar o número de chuteiras e
suas marcas (marca A, marca B e marca C).*/
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "---------- Loja de chuteiras ----------\n\n";
    cout << "Digite a quantidade de chuteiras da marca A: \n";
    cin >> (a);
    cout << "Digite a quantidade de chuteiras da marca B: \n";
    cin >> (b);
    cout << "Digite a quantidade de chuteiras da marca C: \n";
    cin >> (c);
    cout << "\n__________Quantidade de chuteiras_______\n\n";
    cout << " Existem " << a << " chuteiras da marca A\n";
    cout << " Existem " << b << " chuteiras da marca B\n";
    cout << " Existem " << c << " chuteiras da marca C\n";




}

