#include <iostream>
using namespace std;

class testClass
{
public:
    int testNum;
    string testString;
};
int main()
{
    testClass testObj;

    testObj.testNum = 17;
    testObj.testString = "testing string";

    cout << testObj.testNum << endl;
    cout << testObj.testString << endl;
    return 0;
}