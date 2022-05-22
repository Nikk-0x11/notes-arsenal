#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b, c, x1, x2, discriminant, realNum, imaginaryNum;
  cout << "enter coefficients:\n";
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;
  cout << "c: ";
  cin >> c;
  discriminant = pow(b, 2) - 4 * a * c;

  if (discriminant > 0)
  {
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "roots are real and different." << endl;
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
  }
  else if (discriminant == 0)
  {
    cout << "roots are real and same." << endl;
    x1 = -b / (2 * a);
    cout << "x1 = x2 = " << x1 << endl;
  }
  else
  {
    realNum = -b / (2 * a);
    imaginaryNum = sqrt(-discriminant) / (2 * a);
    cout << "roots are complex and different." << endl;
    cout << "x1 = " << realNum << " + " << imaginaryNum << "i" << endl;
    cout << "x2 = " << realNum << " - " << imaginaryNum << "i" << endl;
  }

  return 0;
}