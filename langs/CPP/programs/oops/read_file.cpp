#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // create a text string which is used to output the text file
  string testStr;

  // read from text file
  ifstream testReadFile("neko.txt");

  // using a while loop together which the getline() function to read the file line by line
  while (getline(testReadFile, testStr))
  {
    // output text from the file
    cout << testStr << endl;
  }

  // close the file
  testReadFile.close();
}
