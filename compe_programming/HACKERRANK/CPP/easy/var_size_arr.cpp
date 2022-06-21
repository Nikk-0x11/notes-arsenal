#include <iostream>
using namespace std;

int main()
{
  int n, o;
  cin >> n >> o;

  int *mtr[n];

  for (int i = 0; i < n; i++)
  {
    int s;
    cin >> s;
    mtr[i] = new int[s];
    for (int j = 0; j < s; j++)
    {
      cin >> mtr[i][j];
    }
  }

  for (int i = 0; i < o; i++)
  {
    int r, c;
    cin >> r;
    cin >> c;
    cout << mtr[r][c] << endl;
  }

  return 0;
}