//Marccelo Farid Tito Lezano Prob 5
#include <iostream>

// Función para calcular el MCM de dos números
int mcm(int a, int b) {
    int max = (a > b) ? a : b;
    int i = max;

    while (true) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
        i += max;
    }
}

int main() {
    int smallestMultiple = mcm(1, 2);

    for (int i = 3; i <= 20; i++) {
        smallestMultiple = mcm(smallestMultiple, i);
    }

    std::cout << "El número más pequeño y positivo divisible por todos los números del 1 al 20 es: " << smallestMultiple << std::endl;

    return 0;
}