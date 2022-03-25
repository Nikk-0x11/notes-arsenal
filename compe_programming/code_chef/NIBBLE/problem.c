#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
   int x;
   scanf("%d", &x);
   if (x%4) {
     printf("NOT GOOD\n");
   } else {
     printf("GOOD\n");
   } 
  }
  return 0;
}
