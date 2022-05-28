#include <iostream>
using namespace std;

class cats
{
public:
    string breed;
    string name;
    cats(string x, string y);
};

cats::cats(string x, string y)
{
    breed = x;
    name = y;
}

int main()
{
    cats testObj1("neko 1", "mew mew");
    cats testObj2("neko 2", "pew pew");

    cout << testObj1.breed << " " << testObj1.name << endl;
    cout << testObj2.breed << " " << testObj2.name << endl;
    return 0;
}