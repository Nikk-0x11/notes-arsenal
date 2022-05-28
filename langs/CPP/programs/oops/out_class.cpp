#include <iostream>
using namespace std;

class testClass
{
public:
    void testMethod();
};

void testClass::testMethod()
{
    cout << "Hewwo, World!" << endl;
}

int main()
{
    testClass testObj;
    testObj.testMethod();
    return 0;
}