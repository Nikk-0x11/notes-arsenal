#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m;
    scanf("%d %d", &n, &m);
    int o = 2*n + 4*m;
    printf("%d\n", o);
  }
  return 0;
}
