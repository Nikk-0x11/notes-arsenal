#include <iostream>
using namespace std;

class testClass
{
public:
  string testName;
  int id;

  // printName() not defined inside class
  void printName();

  // printId() defined inside class
  void printId()
  {
    cout << "parson id: " << id << endl;
  }
};

// defining printName() using scope resolution operator ::
void testClass::printName()
{
  cout << "parson name: " << testName << endl;
}

int main()
{
  testClass testObj;
  testObj.testName = "Nikk";
  testObj.id = 17;

  // call printName()
  testObj.printName();

  // call printId()
  testObj.printId();

  return 0;
}