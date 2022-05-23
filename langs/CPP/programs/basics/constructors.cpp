#include <iostream>
using namespace std;

class Names
{
public:
  int id;

  // default constructor
  Names()
  {
    cout << "default constructor called: " << endl;
    id = -1;
  }

  // parameterized constructor
  Names(int x)
  {
    cout << "parameterized constructor called: " << endl;
    id = x;
  }
};

int main()
{
  // testObj1 will call default constructor
  Names testObj1;
  cout << "name id is: " << testObj1.id << endl;

  // testObj2 will call default constructor
  Names testObj2(17);
  cout << "name id is: " << testObj2.id << endl;

  return 0;
}