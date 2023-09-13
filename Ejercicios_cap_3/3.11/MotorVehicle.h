//Marccelo Farid Tito Lezano 3.11
#include <iostream>
#include <string>

using namespace std;

class MotorVehicle {
public:
    MotorVehicle(string make, string fueltp, int yomanu, string color, int encapacity) {
        mk = make;
        FuelType = fueltp;
        YearOfManufacture = yomanu;
        Color = color;
        EngineCapacity = encapacity;
    }
    
    
    string getMake() const { 
        return mk; 
    }

    string getFuelType() const { 
        return FuelType; 
    }

    int getYearOfManufacture() const { 
        return YearOfManufacture; 
    }
    
    string getColor() const { 
        return Color;
    }
    int getEngineCapacity() const { 
        return EngineCapacity; 
    }
     
    
    void setMake(string make) { 
        mk = make; 
    }

    void setFuelType(string fueltp) { 
        FuelType = fueltp; 
    }

    void setYearOfManufacture(int yomanu) { 
        YearOfManufacture = yomanu; 
    }

    void setColor(string color) { 
        Color = color; 
    }

    void setEngineCapacity(int encapacity) { 
        EngineCapacity = encapacity; 
    }
    
    void displayCarDetails() {
        cout << "Make: " << mk << endl;
        cout << "\nFuelType: " << FuelType << endl;
        cout << "\nYearOfManufacture: " << YearOfManufacture << endl;
        cout << "\nColor: " << Color << endl;
        cout << "\nEngineCapacity: " << EngineCapacity <<"cm3"<< endl;
    }

    
private:
    string mk;
    string FuelType;
    int YearOfManufacture;
    string Color;
    int EngineCapacity;
};
