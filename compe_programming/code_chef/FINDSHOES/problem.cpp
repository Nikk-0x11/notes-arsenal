#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> n >> m;
    if (m > n) {
      cout << n << endl;
    } else if (n > m) {
      cout << 2*n-m << endl;
    } else if (n == m) {
      cout << n << endl;
    }
  }
  return 0;
}
