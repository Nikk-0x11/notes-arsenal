#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  cout << food << "\n";
  cout << &food << "\n";
  cout << ptr << "\n";

  return 0;
}
