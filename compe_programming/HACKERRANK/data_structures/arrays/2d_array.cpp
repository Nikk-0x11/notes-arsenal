#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[7][7];

int sum(int x, int y)
{
  return arr[x][y] + arr[x][y + 1] + arr[x][y + 2] + arr[x + 1][y + 1] + arr[x + 2][y] + arr[x + 2][y + 1] + arr[x + 2][y + 2];
}
int main()
{
  int out_val = -100;

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      out_val = max(out_val, sum(i, j));
    }
  }

  cout << out_val << endl;
  return 0;
}