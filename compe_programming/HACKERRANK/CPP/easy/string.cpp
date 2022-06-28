#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a, b;

  cin >> a >> b;

  string c = a + b;

  int l1 = a.size();
  int l2 = b.size();

  char c1 = a[0];
  char c2 = b[0];

  a[0] = c2;
  b[0] = c1;

  cout << l1 << " " << l2 << endl;
  cout << c << endl;
  cout << a << " " << b << endl;

  return 0;
}