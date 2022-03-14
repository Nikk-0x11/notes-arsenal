#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    if (x < y) {
      cout << "BIKE \n";
    } else if (x > y) {
      cout << "CAR \n";
    } else {
      cout << "SAME \n";
    }
  }
  return 0;
}
