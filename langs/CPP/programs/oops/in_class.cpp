#include <iostream>
using namespace std;

class testClass
{
public:
    void testMethod()
    {
        cout << "Hello, World!" << endl;
    }
};

int main()
{
    testClass testObj;
    testObj.testMethod();
    return 0;
}