#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m, n;
    cin >> m >> n;
    if ((m * n) % 2 == 0)
    {
      cout << "YES"
           << "\n";
    }
    else
    {
      cout << "NO"
           << "\n";
    }
  }
  return 0;
}