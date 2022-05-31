#include <iostream>
using namespace std;

int main()
{
  int n;
  long double factorial = 1.0;

  cout << "enter a +ive int: ";
  cin >> n;

  if (n < 0)
    cout << "factorial of a negative number doesn't exist.";
  else
  {
    for (int i = 1; i <= n; ++i)
    {
      factorial *= i;
    }
    cout << "factorial of " << n << " is " << factorial << endl;
  }

  return 0;
}