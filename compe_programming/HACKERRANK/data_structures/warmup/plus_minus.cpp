#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
  int n; 
  float pos = 0, neg = 0, zero = 0;

  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      pos++;
    }
    else if (arr[i] < 0)
    {
      neg++;
    }
    else if (arr[i] == 0)
    {
      zero++;
    }
  }
  
  cout << pos / arr.size() << "\n" << neg / arr.size() << "\n" << zero / arr.size() << "\n";


  return 0;
}