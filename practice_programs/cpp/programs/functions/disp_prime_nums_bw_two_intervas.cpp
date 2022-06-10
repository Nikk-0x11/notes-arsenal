#include <iostream>
using namespace std;

int check_prime(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "enter two positive nums: ";
    cin >> n1 >> n2;

    // swap n1 and n2 if n1 is greater then n2
    if (n1 > n2)
    {
        n2 = n1 + n2;
        n1 = n2 - n1;
        n2 = n2 - n1;
    }

    cout << "prime numbers b/w " << n1 << " and " << n2 << " are:\n";

    for (int i = n1 + 1; i < n2; ++i)
    {
        // if i is a prime number, flag will be equal to 1
        flag = check_prime(i);

        if (flag)
        {
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}

int check_prime(int n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int x = 2; x <= x / 2; ++x)
    {
        if (n % x == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}