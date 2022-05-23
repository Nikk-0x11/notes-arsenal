#include <iostream>
using namespace std;

class Test
{
  // access specifier
public:
  // data members
  string testName;

  // member func()
  void memberFunc()
  {
    cout << "member name: " << testName << endl;
  }
};

int main()
{
  // declaring an object of class Test
  Test testObj;

  // accessing data member
  testObj.testName = "Nikk";

  // accessing member function
  testObj.memberFunc();

  return 0;
}