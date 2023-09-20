//Marccelo Farid Tito Lezano Prob 6
#include <iostream>
using namespace std;
int main() {
    int sumOfSquares = 0;
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sumOfSquares += i * i;
        sum += i;
    }

    int squareOfSum = sum * sum;
    int difference = squareOfSum - sumOfSquares;

    cout << "La diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma es: " << difference << endl;

    return 0;
}