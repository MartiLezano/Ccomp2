//Marccelo Tito Lezano Ejer_12
#include <iostream>
using namespace std;
//kilometros=k, lo pongo en km por que usamos esa unidad de medida.
int main() {
    float km_totales_por_dia, costo_galon_gasolina, promedio_km_por_galon, tarifa_lugares_estacionamiento_por_dia, costo_peajes_al_dia;
    float costo_diario_de_conduccion;

    cout << "Ingrese el costo de kilometros totales por día: ";
    cin >> km_totales_por_dia;

    cout << "Ingrese el costo del galón de gasolina: ";
    cin >> costo_galon_gasolina;

    cout << "Ingrese el promedio de kilometros por galón: ";
    cin >> promedio_km_por_galon;

    cout << "Ingrese la tarifa de lugares de estacionamiento por día: ";
    cin >> tarifa_lugares_estacionamiento_por_dia;

    cout << "Ingrese el costo de peajes al día: ";
    cin >> costo_peajes_al_dia;

    costo_diario_de_conduccion = (km_totales_por_dia / promedio_km_por_galon) * costo_galon_gasolina + tarifa_lugares_estacionamiento_por_dia + costo_peajes_al_dia;

    cout << "El costo diario de conducción es: S/" << costo_diario_de_conduccion << endl;

    return 0;
}



