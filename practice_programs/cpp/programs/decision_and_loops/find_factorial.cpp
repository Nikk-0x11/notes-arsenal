#include <iostream>
using namespace std;

int factorial(int n)
{
  long double factorial = 1;

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
}

int main()
{
  int n;

  cout << "enter a +ive int: ";
  cin >> n;

  factorial(n);

  return 0;
}