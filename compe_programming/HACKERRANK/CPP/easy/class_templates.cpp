#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// TIME LIMIT ExCEEDED
template <class T>
class AddElements
{
  T x;

public:
  AddElements(T a) { x = a; }
  T add(T b) { return x + b; }
};

template <>
class AddElements<string>
{
  string x;

public:
  AddElements(string a) { x = a; }
  string concatenate(string b) { return x + b; }
};


/*
* optimization
* https://www.hackerrank.com/challenges/c-class-templates/forum/comments/654560
*/

int start_up()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  return 0;
}

int static r = start_up();

#define endl '\n';

int main()
{
  int n, i;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    string type;
    cin >> type;
    if (type == "float")
    {
      double element1, element2;
      cin >> element1 >> element2;
      AddElements<double> myfloat(element1);
      cout << myfloat.add(element2) << endl;
    }
    else if (type == "int")
    {
      int element1, element2;
      cin >> element1 >> element2;
      AddElements<int> myint(element1);
      cout << myint.add(element2) << endl;
    }
    else if (type == "string")
    {
      string element1, element2;
      cin >> element1 >> element2;
      AddElements<string> mystring(element1);
      cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
