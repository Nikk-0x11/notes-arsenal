#include <iostream>

int main()
{
  // character variables holds ASCII value between 0 t 127

  char c;
  std::cout << "enter a character: ";
  std::cin >> c;

  // we can explicitly print the ASCII value of char type
  std::cout << "ASCII value for character " << c << " is " << int(c) << std::endl;
  return 0;
}