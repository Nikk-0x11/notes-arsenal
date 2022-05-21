#include <iostream>

int main()
{
  char c;
  std::cout << "enter a character: ";
  std::cin >> c;
  std::cout << "ASCII value for character " << c << " is " << int(c) << std::endl;
  return 0;
}