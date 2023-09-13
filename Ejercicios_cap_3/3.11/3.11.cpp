//Marccelo Farid Tito Lezano 3.11
#include <iostream>
#include "MotorVehicle.h" 
using namespace std;

int main() {
    
    MotorVehicle car1("Susuki", "gas", 2022, "Red", 1000);
    
    cout << "CAR DETAILS:" << endl;
    car1.displayCarDetails();
    cout << endl;
    
    return 0;
}
