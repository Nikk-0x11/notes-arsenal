#include <iostream>
using namespace std;

class testClass
{
public:
  int id;

  // defining destructor
  ~testClass()
  {
    cout << "destructor called for id: " << id << endl;
  }
};

int main()
{
  testClass testObj1;
  testObj1.id = 17;
  int i = 0;
  while (i < 5)
  {
    testClass testObj2;
    testObj2.id = 14;
    i++;
  } // testObj2 scope ends here

  return 0;
} // testObj1 scope ends here