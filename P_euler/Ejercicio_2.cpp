//Marccelo Farid Tito Lezano Prob 2
#include <iostream>
using namespace std;

int main() {
    int n = 4000000;
    int sum = 0;
    int a = 1;
    int b = 1;
    int c = a + b;

    while (c < n) {
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
        c = a + b;
    }
    cout << "La suma de los términos de la secuencia de Fibonacci hasta antes del número " << n << " es: " << sum << endl;

    return 0;
}