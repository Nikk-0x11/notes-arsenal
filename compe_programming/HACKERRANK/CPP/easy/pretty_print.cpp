#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int T;
  cin >> T;
  cout << setiosflags(ios::uppercase);
  cout << setw(0xf) << internal;
  while (T--)
  {
    double A;
    cin >> A;
    double B;
    cin >> B;
    double C;
    cin >> C;

    long long int temp = A;
    cout << setw(0) << nouppercase << showbase << hex << temp << defaultfloat << endl;
    cout << setiosflags(ios::uppercase);

    cout.precision(2);
    if (B > 0)
    {
      cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;
    }
    else
    {
      cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << noshowpos << B << endl;
    }
    cout << setprecision(9) << scientific << noshowpos << C << endl;
  }
  return 0;
}