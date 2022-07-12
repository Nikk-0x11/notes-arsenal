/*
* Solution of https://www.hackerrank.com/challenges/simple-array-sum
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int simpleArraySum(vector<int> arr)
{
  int sum = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }

  return sum;
}

int main()
{
  int n, m, i;
  vector<int> arr;

  cin >> n;

  for (i = 0; i < n; i++)
  {
    cin >> m;
    arr.push_back(m);
  }

  int ans = simpleArraySum(arr);

  cout << ans;

  return 0;
}