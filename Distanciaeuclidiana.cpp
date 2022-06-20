/*O programa da listagem 1.6 permite realizar o cálculo da distância euclidiana entre
dois pontos, sendo que cada ponto é definido pelas coordenadas(x, y).*/



#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x1, y1, x2, y2;
    double distancia;
      

    cout << ("Insira as coordenadas ponto (x/y)1:\n" );
    cin >> x1>>y1;
    cout << ("Insira as coordenadas ponto (x/y)2:\n");
    cin >> x2>>y2;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << ("A distância entre os pontos é =");
    cout<< distancia;



    return 0;
}

