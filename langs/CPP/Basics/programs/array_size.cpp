#include <iostream>
#include <string>
using namespace std;

int main() {
  int myNum[5] = {10, 20, 30, 40, 50};
  // cout << sizeof(myNum);
  int getArrSize = sizeof(myNum) / sizeof(int);
  cout << getArrSize;
  return 0;
}
