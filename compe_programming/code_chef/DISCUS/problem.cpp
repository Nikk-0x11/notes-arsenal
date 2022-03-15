#include <iostream>
#include<algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(a, b);
    int n = max(b, c);
    cout << max(m, n) << "\n";
  }
  return 0;
}