#include <iostream>
using namespace std;

int main() {
  const int myNum = 15; // Defined myNum with const
  myNum = 10; // Should give a read-only error
  cout << myNum;
  return 0;
}
