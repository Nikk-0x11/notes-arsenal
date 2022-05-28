#include <iostream>
using namespace std;

class cats
{
public:
    string breed;
    string name;
    cats(string x, string y)
    {
        breed = x;
        name = y;
    }
};

int main()
{
    cats testObj1("catto 1", "neko");
    cats testObj2("catto 2", "neko neko");

    cout << testObj1.breed << " " << testObj1.name << " " << endl;
    cout << testObj2.breed << " " << testObj2.name << " " << endl;
    return 0;
}