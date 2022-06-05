#include <stdio.h>

int main()
{
  char chr;
  printf("enter a character: ");
  scanf("%c", &chr);

  // When %c is used, a character is displayed
  printf("You entered %c\n", chr);

  // When %d is used, ASCII value is displayed
  printf("ASCII value is %d\n", chr);
  return 0;
}