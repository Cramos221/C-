
#include <iostream>
#include <locale.h>
using namespace std;


int main()
{
    float peso, altura;
    double imc;
    setlocale(LC_ALL, "Portuguese");
    cout << ("Insira o peso: ");
    cin >> peso;
    cout << ("Insira altura: ");
    cin >> altura;
    
    imc = (peso / (altura*altura));

    cout << ("IMC é: ");
    cout << imc;
    return 0;
}

