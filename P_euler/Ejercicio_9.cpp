//Marccelo Farid Tito Lezano Prob 9
#include <iostream>
using namespace std;
int main() {
    for (int a = 1; a <= 1000; a++) {
        for (int b = a + 1; b <= 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                int producto = a * b * c;
                cout << "El triplete pitagórico que cumple con a + b + c = 1000 es: " << a << ", " << b << ", " << c << endl;
                cout << "El producto de a * b * c es: " << producto << endl;
                return 0;
            }
        }
    }

    cout << "No se encontró ningún triplete pitagórico que cumpla con a + b + c = 1000." << endl;

    return 0;
}