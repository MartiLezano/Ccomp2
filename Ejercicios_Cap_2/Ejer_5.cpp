// Marccelo Tito Lezano Ejer_5
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;

    if (a % 2 == 0) {
        cout << a << " es par." << endl;
    }
    else {
        cout << a << " es impar." << endl;
    }
    if (b % 2 == 0) {
        cout << b << " es par." << endl;
    }
    else {
        cout << b << " es impar." << endl;
    }
    if ((a + b) % 2 == 0) {
        cout << "La suma de los dos números es par." << endl;
    }
    else {
        cout << "La suma de los dos números es impar." << endl;
    }

    return 0;
}
