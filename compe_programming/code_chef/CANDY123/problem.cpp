#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int test = 0;
    int alt_a = 0, alt_b = 0;
    while (alt_a <= a && alt_b <= b)
    {
      test++;
      alt_a += test;
      test++;
      alt_b += test;
    }
    if (alt_a > a && alt_b > b)
      cout << "Bob" << endl;
    else if (alt_a > a)
      cout << "Bob" << endl;
    else if (alt_b > b)
      cout << "Limak" << endl;
  }
  return 0;
}