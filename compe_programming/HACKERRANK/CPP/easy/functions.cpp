#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findGreatest(int a, int b, int c, int d)
{
  int final;
  if (a > b && a > c && a > d)
  {
    final = a;
  }
  else if (b > a && b > c && b > d)
  {
    final = b;
  }
  else if (c > a && c > b && c > d)
  {
    final = c;
  }
  else if (d > a && d > b && d > c)
  {
    final = d;
  }
  return final;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = findGreatest(a, b, c, d);
  printf("%d", ans);
  return 0;
}
