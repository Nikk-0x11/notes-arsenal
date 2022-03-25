#include <stdio.h>

int main(void) {
  int t;
  scanf("%d", &t);
  while(t--) {
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    if ((a*1+b*2) >= x) {
      printf("QUALIFY\n");
    } else {
      printf("NotQualify\n");
    }
  }
  return 0;
}
