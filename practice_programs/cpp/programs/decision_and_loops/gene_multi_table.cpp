#include <iostream>
using namespace std;

int main()
{
  int n, r;

  cout << "number: ";
  cin >> n;

  cout << "range: ";
  cin >> r;

  for (int i = 1; i <= r; ++i)
  {
    cout << n << " * " << i << " = " << n * i << endl;
  }
  return 0;
}