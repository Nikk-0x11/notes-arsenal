#include <iostream>
using namespace std;

class testClass
{
public:
    int x;

private:
    int y;
};

int main()
{
    testClass testObj;
    testObj.x = 25;
    testObj.y = 50;
    return 0;
}