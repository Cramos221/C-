
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, maximo;

	cout << ("Insira tres numeros: ");
	cin >> num1 >> num2 >> num3;

	if (num1 > num2 & num1 > num3) {
		maximo = num1;

	}
	else if (num2 > num1 & num2 > num3) {
		maximo = num2;
	}
	else
		maximo = num3;

	cout << ("Numero maximo e:\n");
	cout << maximo;

	return 0;





}




