#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while(t--) {
    int k, x;
    scanf("%d %d", &k, &x);
    int o = k - x;
    printf("%d \n", o);
  }
  return 0;
}
