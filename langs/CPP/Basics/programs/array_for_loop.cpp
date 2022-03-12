#include <iostream>
#include <string>
using namespace std;

int main() {
  string cats[5] = {"cat1", "cat2", "cat3", "cat4"};
  // for (int i = 0; i < 4; i++) {
  //  cout << cats[i] << "\n";
  // }
  for (int i = 0; i < 4; i++) {
    cout << i << ":-> " << cats[i] << "\n";
  }
  return 0;
}
