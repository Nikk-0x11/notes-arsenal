#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int x, y;
    scanf("%d %d", &x, &y);
    int o = x*10 + y*5;
    printf("%d\n", o);
  }
  return 0;
}
