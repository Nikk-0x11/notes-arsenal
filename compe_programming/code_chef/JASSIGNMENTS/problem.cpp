#include <iostream>
using namespace std;

int main() {
  int t, x;
  cin >> t;
  while (t--) {
    cin >> x;
    int f = x + 3;
    if (f <= 10) {
      cout << "Yes \n";
    } else {
      cout << "No \n";
    }
  }
  return 0;
}
