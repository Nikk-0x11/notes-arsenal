#include <iostream>

int main()
{
  int a, b, t;
  std::cout << "enter first number: ";
  std::cin >> a;
  std::cout << "enter second number: ";
  std::cin >> b;

  /*
    assign temp to a
    then a to b
    then b to temp
  */
  t = a;
  a = b;
  b = t;

  std::cout << "\nswapped results\n";
  std::cout << "first number: " << a << ", second number: " << b << std::endl;
  return 0;
}