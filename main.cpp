#include <iostream>

#include <fstream>

#include <string>

#include <vector>

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

void func1(vector <string>& words){
 string odd=" ";
 string even = " ";
 for(int i = 0; i<words.size();i++){
   if(words[i].size() %2==0) odd = odd +" " +words[i];
   else even = even +" " +words[i];
 } 
  cout<<"odd== "<< odd<< endl;
  cout << "even== " << even <<endl;

}

double* func2(vector <string>& words){
 double count = words.size();
 int length=0;
 for(int i = 0; i<words.size();i++){
  length += words[i].size();
 } 
  cout <<"average == "<< length/count;
  //cout<< length<< endl<< count;
  static double mas[2]={count, length/count};
  return mas;
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
  double mas[2];
  func2(words);
return 0;
}
