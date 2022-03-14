#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a * b <= x * y) {
      cout << "Yes \n";
    } else {
      cout << "No \n";
    }
  }
  return 0;
}
