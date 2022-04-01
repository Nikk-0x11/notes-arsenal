#include <iostream>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  if (a != x && b != x && c != x) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
  return 0;
}
