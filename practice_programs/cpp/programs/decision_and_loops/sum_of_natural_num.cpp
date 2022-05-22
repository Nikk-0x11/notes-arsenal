#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;

  cout << "enter a positive integer: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  cout << "sum: " << sum << endl;
  return 0;
}