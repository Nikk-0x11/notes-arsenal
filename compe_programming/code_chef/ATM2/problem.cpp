#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int n, k;
  int calc = 0;
  while (t--)
  {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
      calc = calc + a[i];
      if (k - calc >= 0)
        cout << '1';
      else
      {
        cout << '0';
        calc = calc - a[i];
      }
    }

    cout << endl;
    calc = 0;
  }
  return 0;
}
