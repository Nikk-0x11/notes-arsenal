#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    int x = a + b + c;
    int y = e + d + f;
    if (x > y)
    {
      cout << "DRAGON"
           << "\n";
    }
    else if (y > x)
    {
      cout << "SLOTH"
           << "\n";
    }
    else
    {
      if (a > d)
      {
        cout << "DRAGON"
             << "\n";
      }
      else if (a < d)
      {
        cout << "SLOTH"
             << "\n";
      }
      else
      {
        if (b > e)
        {
          cout << "DRAGON"
               << "\n";
        }
        else if (b < e)
        {
          cout << "SLOTH"
               << "\n";
        }
        else
        {

          cout << "TIE"
               << "\n";
        }
      }
    }
  }
  return 0;
}