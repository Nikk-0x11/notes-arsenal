#include <iostream>
#include <vector>

// using namespace std;

std::vector<int> reverseArray(std::vector<int> a)
{
  reverse(a.begin(), a.end());
  return a;
}

int main()
{

  std::vector<int> a;

  std::cout << reverseArray(a);

  return 0;
}