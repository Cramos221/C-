/*um programa para calcular e escrever
a área e o perímetro de um quadrado. Dados de
entrada: tamanho do lado (tipo da variável: numérico
inteiro, valor em centímetros).*/
#include <iostream>
using namespace std;


int area(int lado) {
    int x;
    x = (lado * lado);

    return x;
}
int perimetro(int lado) {

    int p;
    p = lado * 4;
    return p;
}


int main()
{
    int lado;
    cout << ("Insira a medida do lado de um quadrado em cm: \n");
    cin >> lado;

    cout << ("A area do quadrado e igual a: \n");
    cout << area(lado);
    cout << ("\nO perimetro do quadrado e igual a: \n");
    cout << perimetro(lado);
    return 0;
}

