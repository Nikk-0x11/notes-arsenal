#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int a, b;
    cin >> a >> b;
    if (a == b - 1)
    {
      cout << -1 << endl;
    }
    else if (a % 2 == 0)
    {
      cout << a << " " << a + 2 << endl;
    }
    else if (a % 2 != 0)
    {
      if (a == b - 2)
      {
        cout << -1 << endl;
      }
      else if (a != b - 2 and a % 3 == 0)
      {
        cout << (a) << " " << (a + 3) << endl;
      }
      else if (a != b - 2 and a % 3 != 0)
      {
        cout << a + 1 << " " << a + 3 << endl;
      }
    }
  }
  return 0;
}
