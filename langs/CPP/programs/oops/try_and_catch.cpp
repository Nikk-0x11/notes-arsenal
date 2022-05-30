#include <iostream>
using namespace std;

int main()
{
  try
  {
    int age = 17;
    if (age >= 17)
    {
      cout << "Access granted - you are old enough." << endl;
    }
    else
    {
      throw(age);
    }
  }

  catch (int testNum)
  {
    cout << "Access denied - You must be at least 17 years old." << endl;
    cout << "Age is: " << testNum << endl;
  }
  return 0;
}