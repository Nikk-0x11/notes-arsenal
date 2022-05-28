#include <iostream>
using namespace std;

class car
{
public:
    int speed(int maxSpeed);
};

int car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    car testObj;
    cout << testObj.speed(200);
    return 0;
}