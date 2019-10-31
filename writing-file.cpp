#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian/cpe422/"

int main(int argc, char* argv[]){
  if(argc!=2){
	  cout << "Usage is to write to a file" << endl;
    return 2;
   }
   string cmd(argv[1]);
   cout << "Starting the writing file program" << endl;
   cout << "The current file is: " << FILE_PATH << endl;

  std::fstream fs;
  string path(FILE_PATH);
  string filename = "/"+cmd;
	fs.open((FILE_PATH+filename).c_str(), std::fstream::out);
	fs << "I watched the movie Star Wars I." << endl;
  fs << "i watched the movie Star Trek." << endl;
	fs.close();

  cout << "Finished the writing file program" << endl;
  return 0;
}
