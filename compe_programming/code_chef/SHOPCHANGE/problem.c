#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int x;
    scanf("%d", &x);
    printf("%d\n", 100-x);
  }
  return 0;
}
