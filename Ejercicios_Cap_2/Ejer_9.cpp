//Marccelo Tito Lezano Ejer_9
#include <iostream>
using namespace std;
int main() {
	int numero;
	cout << "Introduce un número de 4 dígitos: ";
	cin >> numero;
	int d1 = numero % 10;
	int d2 = (numero / 10) % 10;
	int d3 = (numero / 100) % 10;
	int d4 = numero / 1000;
	cout << d4 << "   " << d3 << "   " << d2 << "   " << d1 << endl;
	return 0;
}
