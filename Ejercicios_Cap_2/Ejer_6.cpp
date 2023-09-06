//Marccelo Tito Lezano Ejer_6
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Ingrese el tercer número: ";
    cin >> c;
    if (a % b == 0) {
        cout << a << " es múltiplo de " << b << "." << endl;
    }
    else {
        cout << a << " no es múltiplo de " << b << "." << endl;
    }

    if (c % b == 0) {
        cout << c << " es múltiplo de " << b << "." << endl;
    }
    else {
        cout << c << " no es múltiplo de " << b << "." << endl;
    }

    return 0;
}
