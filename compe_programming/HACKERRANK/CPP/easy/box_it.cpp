#include <iostream>

using namespace std;

class Box
{
private:
  int height;
  int breadth;
  int length;

public:
  Box()
  {
    height = 0;
    breadth = 0;
    length = 0;
  }
  Box(int length, int breadth, int height)
  {
    this->length = length;
    this->breadth = breadth;
    this->height = height;
  }
  Box(Box &obj)
  {
    length = obj.length;
    breadth = obj.breadth;
    height = obj.height;
  }
  int getLength()
  {
    return length;
  }
  int getBreadth()
  {
    return breadth;
  }
  int getHeight()
  {
    return height;
  }
  long long CalculateVolume()
  {
    return (long long)height * breadth * length;
  }
  friend bool operator<(Box &b1, Box &b2)
  {
    if ((b1.length < b2.length) ||
        (b1.length == b2.length && b1.breadth < b2.breadth) ||
        (b1.length == b2.length && b1.breadth == b2.breadth &&
         b1.height < b2.height))
      return (true);
    else
      return (false);
  }

  friend ostream &operator<<(ostream &out, Box &obj)
  {
    out << obj.getLength() << " " << obj.getBreadth() << " " << obj.getHeight();
    return out;
  }
};

void check2()
{
  int n;
  cin >> n;
  Box temp;
  for (int i = 0; i < n; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      cout << temp << endl;
    }
    if (type == 2)
    {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      temp = NewBox;
      cout << temp << endl;
    }
    if (type == 3)
    {
      int l, b, h;
      cin >> l >> b >> h;
      Box NewBox(l, b, h);
      if (NewBox < temp)
      {
        cout << "Lesser\n";
      }
      else
      {
        cout << "Greater\n";
      }
    }
    if (type == 4)
    {
      cout << temp.CalculateVolume() << endl;
    }
    if (type == 5)
    {
      Box NewBox(temp);
      cout << NewBox << endl;
    }
  }
}

int main()
{
  check2();
}