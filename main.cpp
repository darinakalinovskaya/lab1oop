#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "modul1.hpp"

using namespace std;
/*
 * It will iterate through all the lines in file and
 * put them in given vector
 */
bool getFileContent(std::string fileName, std::vector < std::string > & vecOfStrs) {
  // Open the File
  std::ifstream in (fileName.c_str());
  // Check if object is valid
  if (! in ) {
    std::cerr << "Cannot open the File : " << fileName << std::endl;
    return false;
  }
  std::string str;
  // Read the next line from File untill it reaches the end.
  while (std::getline( in , str)) {
    // Line contains string of length > 0 then save it in vector
    if (str.size() > 0)
      vecOfStrs.push_back(str);
  }
  //Close The File
  in .close();
  return true;
}


int main(int argc, char * argv[]) {
  
  vector < string > words;
  for (int i = 1; i < argc; i++) {
    cout << argv[i] << endl;
    words.push_back(argv[i]);
  }
  
  if (argc < 2) {
    // Get the contents of file in a vector
    bool result = getFileContent("arguments.txt", words);
    if (result) {
      // Print the vector contents
      for (std::string & line: words)
        std::cout << line << std::endl;
    }
  }  
  func1(words);
  double* mas;
  mas = func2(words);

  cout <<"Enter answers filename "<< endl;
  string filename;
  cin>>filename;
  ofstream MyFile(filename);
  MyFile<< mas[0]<< " "<< mas[1]<< endl;
  MyFile.close();
return 0;
}
