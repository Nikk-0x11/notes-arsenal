#include <stdio.h>

int main()
{
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %ld bytes\n", sizeof(a));
  printf("size of long = %ld bytes\n", sizeof(b));
  printf("size of long long = %ld bytes\n", sizeof(c));
  printf("size of long double = %ld bytes\n", sizeof(d));

  /*
  warning:
  format ‘%d’ expects argument of type ‘int’,
  but argument 2 has type ‘long unsigned int’
  */

  return 0;
}