#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Reference: output the memory address of food with the pointer
  cout << ptr << "\n";
  // Dereference: output the value of the food with the pointer (Pizza)
  cout << *ptr << "\n";

  return 0;
}
