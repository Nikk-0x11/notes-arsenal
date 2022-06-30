#include <iostream>
using namespace std;

#include "solution.h"

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int size;

    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; i++)
    {
      cin >> input[i];
    }

    pushZeroesEnd(input, size);

    for (int i = 0; i < size; i++)
    {
      cout << input[i] << " ";
    }

    cout << endl;
    delete[] input;
  }

  return 0;
}