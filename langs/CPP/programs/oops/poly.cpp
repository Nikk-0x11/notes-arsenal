#include <iostream>
using namespace std;

// base class
class Animal
{
public:
  void animalSound()
  {
    cout << "The animals makes a sound" << endl;
  }
};

// derived class
class Cat : public Animal
{
public:
  void animalSound()
  {
    cout << "The cat says: meow meow" << endl;
  }
};

// derived class
class Dog : public Animal
{
public:
  void animalSound()
  {
    cout << "The dog says: bow wow" << endl;
  }
};

int main()
{
  Animal myAnimal;
  Cat myCat;
  Dog myDog;

  myAnimal.animalSound();
  myCat.animalSound();
  myDog.animalSound();
  return 0;
}