// Marccelo Tito Lezano problema 2.20
#include <iostream>
using namespace std;

int main() {
    int radio;
    int diametro, area;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    diametro = 2 * radio;
    area = 3.1415 * radio * radio;
    cout << "El diámetro del círculo es: " << diametro << endl;
    cout << "El área del círculo es: " << area << endl;
    return 0;
}