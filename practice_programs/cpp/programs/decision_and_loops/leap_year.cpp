#include <iostream>
using namespace std;

int main()
{
  int year;

  cout << "enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400
  if (year % 400 == 0)
  {
    cout << year << " is a leap year." << endl;
  }

  // not a leap year is divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0)
  {
    cout << year << " is not a leap year;" << endl;
  }

  // leap year if not divisible by 100
  // but divisible by 4
  else if (year % 4 == 0)
  {
    cout << year << " is a leap year." << endl;
  }

  // all other years are not leap years.
  else
  {
    cout << year << " is not a leap year." << endl;
  }

  return 0;
}
