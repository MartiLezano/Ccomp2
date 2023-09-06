// Marccelo Tito Lezano Ejer_4
//

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int max = 0;
    int min = 0;

    cout << "Ingrese el primer número: ";
    cin >> a;
    max = a;
    min = a;

    cout << "Ingrese el segundo número: ";
    cin >> b;
    if (b > max) {
        max = b;
    }
    else if (b < min) {
        min = b;
    }

    cout << "Ingrese el tercer número: ";
    cin >> c;
    if (c > max) {
        max = c;
    }
    else if (c < min) {
        min = c;
    }

    cout << "Ingrese el cuarto número: ";
    cin >> d;
    if (d > max) {
        max = d;
    }
    else if (d < min) {
        min = d;
    }

    cout << "Ingrese el quinto número: ";
    cin >> e;
    if (e > max) {
        max = e;
    }
    else if (e < min) {
        min = e;
    }

    cout << "El número más grande es " << max << endl;
    cout << "El número más pequeño es " << min << endl;

    return 0;
}

