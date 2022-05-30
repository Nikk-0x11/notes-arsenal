#include <iostream>
using namespace std;

// base class
class Employee
{
protected:
  int salary;
};

// derived class
class Programmer : public Employee
{
public:
  int bonus;
  void setSalary(int s)
  {
    salary = s;
  }
  int getSalary()
  {
    return salary;
  }
};

int main()
{
  Programmer testObj;
  testObj.setSalary(50000);
  testObj.bonus = 15000;
  cout << "Salary: " << testObj.getSalary() << endl;
  cout << "Bonus: " << testObj.bonus << endl;
  return 0;
}
