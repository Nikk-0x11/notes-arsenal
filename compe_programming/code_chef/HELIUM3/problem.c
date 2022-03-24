#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    if(a*b <= x*y) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
