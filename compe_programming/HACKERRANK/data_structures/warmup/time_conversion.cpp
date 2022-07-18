#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
  int h, m, s;
  char t[3];

  scanf("%d:%d:%d%s", &h, &m, &s, &t);

  if (strcmp(t, "PM") == 0 && h != 12)
    h += 12;
  if (strcmp(t, "AM") == 0 && h == 12)
    h = 0;

  printf("%02d:%02d:%02d", h, m, s);

  return 0;
}