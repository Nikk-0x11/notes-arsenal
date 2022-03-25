#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--){
    int n, x, p;
    scanf("%d %d %d", &n, &x, &p);
      if(x*3-(n-x) >= p) {
          printf("Pass\n");
      }
      else {
          printf("Fail\n");
      }
  }
  return 0;
}
