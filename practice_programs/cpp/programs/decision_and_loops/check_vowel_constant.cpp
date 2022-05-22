#include <iostream>

int main()
{
  char a;
  bool isUppercase, isLowercase;

  std::cout << "enter a character: ";
  std::cin >> a;

  // evaluates to 1 (true) if c is lower or upper case
  isLowercase = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
  isUppercase = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

  // error if input is not an alphabetic character.
  if (!isalpha(a))
    std::cout << "seems like you entered a non-alphabetic charater.\n";
  else if (isLowercase || isUppercase)
    std::cout << a << " is vowel.\n";
  else
    std::cout << a << " is constant.\n";

  return 0;
}