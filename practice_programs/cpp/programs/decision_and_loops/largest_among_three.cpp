#include <iostream>

int main()
{
  int a, b, c;

  std::cout << "enter first number: ";
  std::cin >> a;
  std::cout << "enter second number: ";
  std::cin >> b;
  std::cout << "enter third number: ";
  std::cin >> c;

  if (a > b && a > c)
    std::cout << "a is greater\n";
  else if (b > c && b > a)
    std::cout << "b is greater.\n";
  else if (c > b && c > a)
    std::cout << "c is greater.\n";
  else
    std::cout << "all are equal.\n";

  return 0;
}