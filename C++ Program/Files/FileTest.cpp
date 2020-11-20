// basic file operations
#include <iostream>
#include <fstream>
#include<string>
#include<conio.h>
using namespace std;

//int main () {
//  ofstream myfile;
//  myfile.open ("firsttext.txt");
//  myfile << "Writing this to a file.\n";
//  myfile.close();
//  return 0;
//}



// writing on a text file
//int main () {
//  ofstream myfile ("example.txt");
//  if (myfile.is_open())
//  {
//    myfile << "This is a line.\n";
//    myfile << "This is another line.\n";
//    myfile.close();
//  }
//  else cout << "Unable to open file";
//  return 0;
//}

//reading text
int main () {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  getch();
}



// reading an entire binary file

//int main () {
//  streampos size;
//  char * memblock;
//
//  ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
//  if (file.is_open())
//  {
//    size = file.tellg();
//    memblock = new char [size];
//    file.seekg (0, ios::beg);
//    file.read (memblock, size);
//    file.close();
//
//    cout << "the entire file content is in memory";
//
//    delete[] memblock;
//  }
//  else cout << "Unable to open file";
//  return 0;
//}
