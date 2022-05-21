#include <iostream>

int main()
{
  int a, b;
  std::cout << "enter divisor: ";
  std::cin >> a;
  std::cout << "enter dividend: ";
  std::cin >> b;

  // fogging quotient
  std::cout << "quotient: "
            << a % b << std::endl;

  // fogging remainder
  std::cout << "remainder: " << a / b << std::endl;
  return 0;
}