#include <stdio.h>

int main()
{
  int num;

  printf("enter an integer: ");
  scanf("%d", &num);

  // true if number is less than 0
  if (num < 0)
  {
    printf("you entered %d\n", num);
  }

  printf("if statement test.\n");
  return 0;
}