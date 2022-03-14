#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(abs(a-c),abs(b-d)) << "\n";
  }
  return 0;
}
