//Marccelo Farid Tito Lezano Prob 1
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    cout << "La suma de todos los múltiplos de 3 o 5 antes de 1000 es: " << sum << endl;
    return 0;
}