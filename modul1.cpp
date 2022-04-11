#include <iostream>

#include <fstream>

#include <string>

#include <vector>

using namespace std;

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