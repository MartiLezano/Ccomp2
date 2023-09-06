//Marccelo Tito Lezano Ejer_11
#include <iostream>
using namespace std;

int main() {
    float peso, altura;
    float bmi;

    cout << "Ingrese su peso en kilos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    bmi = peso / (altura * altura);

    cout << "Su índice de masa corporal es: " << bmi *10000<< endl;
        
        cout << "Valores de índice de masa corporal:" << endl;
        cout << "Bajo peso: menos de 18.5" << endl;

        cout << "Normal: entre 18.5 y 24.9" << endl;

        cout << "Sobrepeso: entre 25 y 29.9" << endl;

        cout << "Obesidad: 30 o más" << endl;
 
    return 0;
}