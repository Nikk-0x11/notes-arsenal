#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
  int q;
  set<int> s;
  set<int>::iterator itr;

  cin >> q;

  while (q > 0)
  {
    int x, y;
    cin >> x >> y;
    if (x == 1)
    {
      s.insert(y);
    }
    else if (x == 2)
    {
      itr = s.find(y);
      if (itr != s.end())
      {
        s.erase(y);
      }
    }
    else if (x == 3)
    {
      itr = s.find(y);

      if (itr != s.end())
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    q--;
  }

  return 0;
}