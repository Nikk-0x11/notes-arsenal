#include <iostream>
// using namespace std;

// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)

int count_x(char *p, char x)
{
  if (p == nullptr)
    return 0;
  int count = 0;
  for (; *p != 0; ++p)
  {
    if (*p == x)
    {
      ++count;
    }
    return count;
  }
}

int main()
{

  char *p = "y";
  char x = 'x';
  std::cout << count_x(p, x) << std::endl;

  // removed namespace cuz of cout is ambiguous

  /*
  The second line causing the error,
  u can use " " with pointers cuz char* is just a string

  char *p = "x";
  char x = "y";

  error: a value of type "const char *"
  cannot be used to initialize an entity of type "char"
  */
}