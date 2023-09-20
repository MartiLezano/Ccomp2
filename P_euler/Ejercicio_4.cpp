//Marccelo Farid Tito Lezano Prob 4
#include <iostream>
using namespace std;

int main() {
    int largestPalindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            int number = product;
            int reverse = 0;

            while (number != 0) {
                int digit = number % 10;
                reverse = reverse * 10 + digit;
                number /= 10;
            }

            if (product == reverse && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    cout << "El palíndromo más grande hecho del producto de dos grupos de números de 3 dígitos es: " << largestPalindrome << endl;

    return 0;
}