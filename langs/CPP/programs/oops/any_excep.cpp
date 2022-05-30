#include <iostream>
using namespace std;

int main()
{
  try
  {
    int age = 17;
    if (age >= 18)
    {
      cout << "Access granted - you are old enough." << endl;
    }
    else
    {
      throw 505;
    }
  }

  catch (...)
  {
    cout << "Access denied - you ust be atleast 18" << endl;
  }
}