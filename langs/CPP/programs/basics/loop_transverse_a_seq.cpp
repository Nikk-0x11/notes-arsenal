#include <iostream>
using namespace std;

void print()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto x : v)
  {
    cout << x << endl;
  }

  for (auto x : {10, 21, 32, 45, 65, 34})
  {
    cout << x << endl;
  }
}

int main()
{
  print();
  return 0;
}