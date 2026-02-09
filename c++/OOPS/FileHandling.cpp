#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  //open the file
  ofstream fout;
  fout.open("ashish.txt");  //if file not present then it'll be created and opened.

  //write operation
  fout<<"Hello DSA";

  fout.close();   //Resources will be released
}