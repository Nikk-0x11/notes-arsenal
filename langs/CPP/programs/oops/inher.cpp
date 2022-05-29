#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
  string brand = "Ford";
  void honk()
  {
    cout << "tuut, toot!" << endl;
  }
};

// derived class
class Car : public Vehicle
{
public:
  string model = "Mustang";
};

int main()
{
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model << endl;
  return 0;
}