#include <stdio.h>

int main()
{
  // valid codes
  unsigned int x = 35;
  int y = -35; // signed int
  int z = 36;  // signed int

  // invalid code: unsigned int cannot hold negative integers
  unsigned int num = -35;

  printf("valid:\npositive unsigned int: %d\n", x);
  printf("negative int: %d\n", y);
  printf("positive int: %d\n", z);
  printf("\ninvalid:\nnegative unsigned int: %d\n", num);
  return 0;
}