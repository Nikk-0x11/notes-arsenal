#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (x <= 15) {
      cout << "Yes \n";
    } else {
      cout << "No \n";
    }
  }
  return 0;
}
