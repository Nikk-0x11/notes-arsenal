#include <iostream>
#include <string>
using namespace std;

int main() {
  string cats[5] ={"cat1", "cat2", "cat3", "cat4", "cat5"};
  cats[2] = "neko_here";
  cout << cats[2];
  return 0;
}
