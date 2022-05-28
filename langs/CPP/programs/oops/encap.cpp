#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
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
    Employee testObj;
    testObj.setSalary(500000);
    cout << testObj.getSalary();
    return 0;
}