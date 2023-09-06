//Marccelo Tito Lezano Ejer_10
 #include <iostream>
using namespace std;
int main() {
    // Imprimimos la cabecera de la tabla
    cout << "Longitud de la cara (cm)\t Área de la superficie (cm^2)\t Volumen (cm^3)" << endl;
    // Recorremos las longitudes de las caras de 0 a 4 cm
    for (int i = 0; i <= 4; i++) {
        // Calculamos el área de la superficie y el volumen del cubo
        int areaSuperficie = 6 * i * i;
        int volumen = i * i * i;
        // Imprimimos los resultados en la tabla
        cout << i << "\t\t\t\t" << areaSuperficie << "\t\t\t\t" << volumen << endl;
    }
    return 0;
}