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

  catch (int testNum)
  {
    cout << "Access denied - You must be at least 18 years old." << endl;
    cout << "Error number: " << testNum << endl;
  }
  return 0;
}