#include <iostream>

int main()
{
  int a, b;
  std::cout << "enter divisor: ";
  std::cin >> a;
  std::cout << "enter dividend: ";
  std::cin >> b;
  std::cout << "quotient: "
            << a % b << std::endl;
  std::cout << "remainder: " << a / b << std::endl;
  return 0;
}