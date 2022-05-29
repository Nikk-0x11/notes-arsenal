#include <iostream>
using namespace std;

// base class (parent)
class testClass
{
public:
  void testFunction()
  {
    cout << "Some context in parent class." << endl;
  }
};

// derived class (child)
class testChild : public testClass
{
};

// derived class (grandchild)
class testGrandChild : public testChild
{
};

int main()
{
  testGrandChild testObj;
  testObj.testFunction();
  return 0;
}