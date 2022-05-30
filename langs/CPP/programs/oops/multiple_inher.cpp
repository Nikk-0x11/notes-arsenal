#include <iostream>
using namespace std;

// base class
class testClass
{
public:
  void testFunction()
  {
    cout << "some text from base class." << endl;
  }
};

// another base class
class otherTestClass
{
public:
  void otherTestFunction()
  {
    cout << "some text from another base class." << endl;
  }
};

// derived class
class testChildClass : public testClass, public otherTestClass
{
};

int main()
{
  testChildClass testObj;
  testObj.testFunction();
  testObj.otherTestFunction();
  return 0;
}