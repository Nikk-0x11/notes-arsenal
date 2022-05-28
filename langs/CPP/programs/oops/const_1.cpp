#include <iostream>
using namespace std;

class testClass
{
public:
    testClass()
    {
        cout << "Hewwo, World!" << endl;
    }
};

int main()
{
    testClass testObj;
    return 0;
}