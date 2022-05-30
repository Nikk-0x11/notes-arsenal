#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // create and open a text file
  ofstream testFile("neko.txt");

  // write to the file
  testFile << "ehh this is dem nicu!" << endl;

  // close the file
  testFile.close();

  return 0;
}