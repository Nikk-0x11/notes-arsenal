#include <iostream>
using namespace std;

void increment()
{
  int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto &x : v)
  {
    ++x;
    cout << x << endl;
  }
}

int main()
{
  increment();
  return 0;
}