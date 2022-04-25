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
bool getFileContent(string fileName, vector < string > & vecOfStrs) {
  // Open the File
  ifstream in (fileName.c_str());
  // Check if object is valid
  if (! in ) {
    cerr << "Cannot open the File : " << fileName << endl;
    return false;
  }
  string str;
  // Read the next line from File untill it reaches the end.
  while (getline( in , str)) {
    // Line contains string of length > 0 then save it in vector
    if (str.size() > 0)
      vecOfStrs.push_back(str);
  }
  //Close The File
  in.close();
  return true;
}


int main(int argc, char * argv[]) {
  string outFile = "";
  cout << argc<< endl;
  if(argc<2){
    cout<<" no output parameter ";
    return 0;
  }
  else{
    outFile = argv[1];
    cout <<"outFile:   "<< outFile<< endl;
  }

  vector < string > words;
  for (int i = 2; i < argc; i++) {
    cout << argv[i] << endl;
    words.push_back(argv[i]);
  }
  
  if (argc < 3) {
    string file1;
    cout<<"Enter filename: "<< endl;
    cin >> file1;
    // Get the contents of file in a vector
    bool result = getFileContent(file1, words);
    if (result) {
      // Print the vector contents
      for (string & line: words)
        cout << line << endl;
    }
  }  
  func1(words);
  double* mas;
  mas = func2(words);

  ofstream MyFile(outFile);
  MyFile<< mas[0]<< " "<< mas[1]<< endl;
  MyFile <<"sorted data: "<< endl;
  for(const auto& value: words) {
    MyFile<< value << "\n";
}
  MyFile.close();
  
  return 0;
}
