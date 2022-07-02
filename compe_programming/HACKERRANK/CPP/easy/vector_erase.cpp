#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, x, a, b, c;
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    v.push_back(x);
  }

  cin >> a >> b >> c;

  v.erase(v.begin() + (a - 1));
  v.erase(v.begin() + (b - 1), v.begin() + (c - 1));

  cout << v.size() << endl;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}