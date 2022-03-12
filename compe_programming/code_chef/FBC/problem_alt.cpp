#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int k, x;
    cin >> k >> x;
    cout << (k - x) << "\n";
  }
  return 0;
}
