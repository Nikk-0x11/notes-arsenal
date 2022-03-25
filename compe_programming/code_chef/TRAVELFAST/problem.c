#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x < y) {
      printf("BIKE\n");
    } else if(y < x) {
      printf("CAR\n");
    } else {
      printf("SAME\n");
    }
  }
  return 0;
}
