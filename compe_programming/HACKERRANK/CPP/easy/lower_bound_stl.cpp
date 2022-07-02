#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int m, n, x, y;

  vector<int> v1;

  cin >> m;

  for (int i = 0; i < m; i++)
  {
    cin >> x;
    v1.push_back(x);
  }

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> y;
    vector<int>::iterator it;

    it = lower_bound(v1.begin(), v1.end(), y);

    if (*(it + 1) == y || *it == y)
    {
      cout << "Yes " << it - v1.begin() + 1 << endl;
    }
    else
    {
      cout << "No " << it - v1.begin() + 1 << endl;
    }
  }

  return 0;
}
