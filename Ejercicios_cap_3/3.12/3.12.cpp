//Marccelo Farid Tito Lezano 3.12
#include "Date.h"
#include <iostream>
using namespace std;


int main() {
    Date fecha1(5, 06, 2002); //comprobación de rango

    Date fecha2(4, 10, 2004);

    fecha1.displayDate(); 
    fecha2.displayDate(); 

    return 0;
}
