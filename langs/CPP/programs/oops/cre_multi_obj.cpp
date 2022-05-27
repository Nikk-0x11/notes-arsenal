#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    Car carsObj1;
    carsObj1.brand = "BMW";
    carsObj1.model = "X5";
    carsObj1.year = 2000;

    Car carsObj2;
    carsObj2.brand = "Ford";
    carsObj2.model = "Mustang";
    carsObj2.year = 1969;

    cout << carsObj1.brand << " " << carsObj1.model << " " << carsObj1.year << endl;
    cout << carsObj2.brand << " " << carsObj2.model << " " << carsObj2.year << endl;
    return 0;
}