#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", n*10);
  }
  return 0;
}
