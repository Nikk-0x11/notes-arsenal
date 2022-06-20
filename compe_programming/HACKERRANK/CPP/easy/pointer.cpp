#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;

void update(int *a, int *b)
{
  int x, y;
  x = *a + *b;
  y = *a - *b;
  *a = x;
  *b = abs(y);
}

int main()
{
  int a, b;
  int *poa = &a, *pob = &b;
  scanf("%d %d", &a, &b);
  update(poa, pob);
  printf("%d\n%d", a, b);
  return 0;
}