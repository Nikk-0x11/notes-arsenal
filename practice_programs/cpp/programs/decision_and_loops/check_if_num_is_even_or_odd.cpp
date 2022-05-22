#include <iostream>

int main()
{
  int a;
  std::cout << "enter a number: ";
  std::cin >> a;

  // Integers that are divisible by 2 are called even numbers.
  if (a % 2 == 0)
  {
    std::cout << a << " is even.\n";
  }
  else
  {
    std::cout << a << " is odd.\n";
  }
  return 0;
}