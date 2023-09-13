//Marccelo Farid tito Lezano 3.10
#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

int main() {
    // Variables 
    string p_number, description;
    int qt, VAT;
    double price, discount;

    // Solicitar al usuario que ingrese los datos del artículo
    cout << "Ingrese el numero de pieza: ";
    cin >> p_number;

    cout << "Ingrese la descripcion: ";
    cin.ignore(); 
    getline(cin, description);

    cout << "Ingrese la cantidad: ";
    cin >> qt;

    cout << "Ingrese el precio unitario: ";
    cin >> VAT;

    cout << "Ingrese el impuesto (porcentaje): ";
    cin >> price;

    cout << "Ingrese el descuento (porcentaje): ";
    cin >> discount;

    // Crear un objeto Factura 
    Invoice Invoice(p_number, description, qt, VAT, price / 100, discount / 100);

    // Calcular el monto total de la factura
    double total = Invoice.getinvoiceaccount();

    // Mostrar factura y el monto total
    cout << "\nDetalles de la factura:\n";
    cout << "Numero de parte: " << Invoice.setpart_number() << endl;
    cout << "Descripcion: " << Invoice.set_description() << endl;
    cout << "Cantidad: " << Invoice.getquantity() << endl;
    cout << "Precio unitario: $" << Invoice.getprice() << endl;
    cout << "Impuesto: " << Invoice.getVAT() * 100 << "%\n";
    cout << "Descuento: " << Invoice.setdiscount() * 100 << "%\n";
    cout << "Monto total de la factura: $" << total << endl;

    return 0;
}