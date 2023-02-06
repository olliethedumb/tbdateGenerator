#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

fstream quotefile;
string filename, line;
int randomLine, numOfLines;

int main() {

  filename = "tbdate.txt";
  srand(time(0));
  randomLine = rand() % 123;
  quotefile.open(filename.c_str(), fstream::in);

  if (quotefile.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {

    while (getline(quotefile, line)) {
      ++numOfLines;
      if(numOfLines == randomLine){
        cout << line << endl;
      }
    }

    quotefile.close();
  }
  system("pause");
}