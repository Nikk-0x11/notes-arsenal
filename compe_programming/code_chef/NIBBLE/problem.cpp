#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    if (x%4) {
      cout << "Not Good \n";
    } else {
      cout << "Good \n";
    }
  }
  return 0;
}
