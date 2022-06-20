#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
  int a, b;
  string str[] = {"one", "two", "three", "four ", "five", "six", "seven", "eight", "nine", "even", "odd"};
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (i <= 9)
    {
      cout << str[i - 1] << endl;
    }
    else
    {
      cout << str[9 + (i % 2)] << endl;
    }
  }
  return 0;
}