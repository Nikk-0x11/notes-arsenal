#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int q, x, marks;
  string name;
  map<string, int> m;

  cin >> q;

  while (q > 0)
  {
    cin >> x >> name;

    if (x == 1)
    {
      cin >> marks;
      m[name] += marks;
    }
    else if (x == 2)
    {
      m[name] = 0;
    }
    else if (x == 3)
    {
      cout << m[name] << endl;
    }

    q--;
  }

  return 0;
}