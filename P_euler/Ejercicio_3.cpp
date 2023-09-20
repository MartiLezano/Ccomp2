//Marccelo Farid Tito Lezano Prob 3
#include <iostream>
using namespace std;

int main() {
    long long number = 600851475143;
    long long larPrFact = 2;

    while (number > larPrFact) {
        if (number % larPrFact == 0) {
            number /= larPrFact;
        }
        else {
            larPrFact++;
        }
    }

    cout << "The largest prime factor of the number 600851475143 is: " << larPrFact << endl;

    return 0;
}