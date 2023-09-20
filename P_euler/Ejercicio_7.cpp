//Marccelo Farid Tito Lezano Prob 7
#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int encontrarPrimo(int n) {
    int contador = 1;  // Comenzamos en 1 para incluir el primer primo (2)
    int numeroActual = 3;

    while (contador < n) {
        if (esPrimo(numeroActual)) {
            contador++;
        }
        if (contador == n) {
            return numeroActual;
        }
        numeroActual += 2;  // Solo verificamos numeros impares
    }

    return -1;  // Si no encuentra, retorna -1.
}

int main() {
    int n = 10001;
    int resultado = encontrarPrimo(n);

    cout << "El " << n << "º número primo es: " << resultado << endl;

    return 0;
}