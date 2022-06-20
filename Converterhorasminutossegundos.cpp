



#include <iostream>
#include<locale>

using namespace std;

int main()
{   

    setlocale(LC_ALL, "Portuguese");

    int segundos, h, m, s;
    
    cout << ("Insira a hora: ");
    cin >> h;
    cout << ("\nInsira os minutos\n");
    cin >> m;
    cout << ("\nInsira os segundos\n");
    cin >> s;

    segundos = (h * 3600 + m * 60 + s);

    cout << ("A hora em segundos é: \n");
    cout << segundos;



    return 0;

}

