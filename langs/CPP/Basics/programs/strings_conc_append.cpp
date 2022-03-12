#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "one ";
  string lastName = "two";
  string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}

