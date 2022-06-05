#include <stdio.h>

int main()
{
  int a;
  float b;

  printf("enter integer and then a float: ");

  // multiple inputs
  scanf("%d%f", &a, &b);

  printf("you entered %d and %f\n", a, b);
  return 0;
}