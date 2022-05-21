#include <iostream>

int main()
{
  int i;
  float f;
  double d;
  char c;
  std::cout << "int size:    " << sizeof(i) << " bytes" << std::endl;
  std::cout << "float size:  " << sizeof(f) << " bytes" << std::endl;
  std::cout << "double size: " << sizeof(d) << " bytes" << std::endl;
  std::cout << "char size:   " << sizeof(c) << " bytes" << std::endl;
  return 0;
}