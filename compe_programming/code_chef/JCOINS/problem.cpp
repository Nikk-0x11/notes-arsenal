#include <iostream>
using namespace std;

int main() {
  int t, x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
    cout << ((x * 10) + (y * 5)) << "\n";
  }
  return 0;
}
