#include <iostream>

int main()
{
  int a, b;
  std::cout << "enter first number: ";
  std::cin >> a;
  std::cout << "enter second number: ";
  std::cin >> b;

  // product of both inputs...
  std::cout << "product of " << a << " and " << b << " is " << a * b << std::endl;
  return 0;
}