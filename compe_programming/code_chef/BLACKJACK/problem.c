#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (21 - (a+b) <= 10) {
      printf("%d\n", 21 - (a+b));
    } else {
      printf("-1\n");
    }
  }
  return 0;
}
