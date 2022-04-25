#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
 
void func1(vector <string>& words){
 vector <string> odd;
 vector <string> even;
 for(int i = 0; i<words.size();i++){
  if(words[i].size() %2==0){
     odd.push_back(words[i]);
   }
   else{ 
     even.push_back(words[i]);
   } 
 }
  
  //clear vector
  words.clear();
  
  cout<< endl<<"odd: "<< endl; 
  for (int i = 0; i < odd.size(); i++) {
            cout << odd[i] << " ";
        words.push_back(odd[i]);
        }
  cout<<endl;
  cout<<endl <<"even: "<< endl;
  for (int i = 0; i < even.size(); i++) {
            cout << even[i] << " ";
        words.push_back(even[i]);
        }
  cout<< endl;

}

double* func2(vector <string>& words){
 double count = words.size();
 int length=0;
 for(int i = 0; i<words.size();i++){
  length += words[i].size();
 } 
  cout <<"average == "<< length/count<< endl;
  cout<<"length total== " <<length<< endl<< "words count== " <<count<< endl;
  static double mas[2]={count, length/count};
  return mas;
}