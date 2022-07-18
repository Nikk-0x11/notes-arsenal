#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;

  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max_num = 0;

  for (int i = 0; i < n; i++)
  {
    if (max_num < arr[i])
    {
      max_num = arr[i];
    }
  }

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == max_num)
    {
      ans++;
    }
  }

  cout << ans;

  return 0;
}