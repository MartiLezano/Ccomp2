//Marccelo Farid Tito Lezano Prob 10
#include <iostream>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long sum = 0;
    for (int i = 2; i < 2000000; ++i) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    cout << "La suma de todos los números primos por debajo de dos millones es: " << sum << endl;
    return 0;
}