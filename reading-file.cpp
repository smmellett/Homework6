#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian/cpe422/"

// to use in cmd line:: ./reading-file sample.txt

int main(int argc, char* argv[]){
  if(argc!=2){
  cout << "Usage is to read a file" << endl;
  return 2;
  }

  string cmd(argv[1]);
  cout << endl;
  cout << endl;
  cout << "Starting the read file program" << endl;
  cout << "The current file path is: " << FILE_PATH << endl;
  cout << endl;
  cout << endl;


  std::fstream fs;
	string line;
  string filename = "/"+ cmd;
  fs.open((FILE_PATH + filename).c_str(),std::fstream::in);	
  while(getline(fs,line)) cout << line << endl;
	fs.close();

  return 0;
}
