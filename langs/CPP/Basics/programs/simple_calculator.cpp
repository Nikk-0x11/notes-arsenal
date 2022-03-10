#include <iostream>
using namespace std;

int main(){
  int a, b, t, result;

    while(true) {
    cout << "\nChoose an option from below options:\n\t1. Addition (+)\n\t2. Subtraction (-)\n\t3. Multiplication (x)\n\t4. Divide (/)\n\t5. Exit\nEnter your choice :-> ";
    cin >> t;
    if (t==5) {
          cout<<"Bui Bui!";
          break;
      } else if (t<5){

      cout << "Enter first number :-> ";
      cin >> a;
      cout << "Enter second numbr :-> ";
      cin >> b;

      if (t == 1) {
        result = a + b;
      } else if (t == 2) {
        result = a - b;
      } else if (t == 3) {
        result = a * b;
      } else if (t == 4) {
        result = a / b;
      } else {
          cout<<"Enter a valid input!";
      }

      cout << "Final Result :-> " << result << "\n";
      } else {
          cout<<"Pew Pew!";
      }
    }
  return 0;
}
