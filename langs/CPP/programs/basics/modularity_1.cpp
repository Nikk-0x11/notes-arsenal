#include <iostream>
using namespace std;

int main()
{
    double sqrt(double);

    class Vector
    {
    public:
        Vector(int s);
        double &operator[](int i);
        int size();

    private:
        double *elem;
        int sz;
    };

    return 0;
};