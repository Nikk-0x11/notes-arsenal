#include <iostream>
using namespace std;

// next term is sum of previous term
int main()
{
    int n, t1 = 0, t2 = 1, nt = 0;

    cout << "enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;

        cout << nt << ", ";
    }
    cout << endl;
    return 0;
}