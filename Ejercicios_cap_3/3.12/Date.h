//Marccelo Farid Tito Lezano 3.12
#include <iostream>
using namespace std;
class Date {

public:
Date(int mes, int dia, int y) {
    if (mes < 1 || mes > 12)
    {
        month = 1;
    } 
    else 
    {
        month = mes;
    }
    day = dia;
    year = y;
    }
    void setDay(int dia) {
        day = dia;
    }
    void setMonth(int mes) {
        if (mes < 1 || mes > 12) 
        {
            month = 1;
        } 
        else 
        {
            month = mes;
        }
    }
    void setYear(int y) {
        year = y;
    }


    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }

private:
    int month;
    int day;
    int year;
};
