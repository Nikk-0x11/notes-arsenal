#include <iostream>
using namespace std;

void cpy_string()
{
  int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int v2[10]; // to become a copy of v1

  for (auto i = 0; i != 10; ++i)
  {
    v2[i] = v1[i];
    cout << v2[i] << endl;
  }
}

int main()
{
  cpy_string();
}