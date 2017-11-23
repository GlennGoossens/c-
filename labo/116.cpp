#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "container.h"
using namespace std;

int main(){
//Maak een vector aan van mappen
map<char,string> afb;
vector<map<char,string> > vec(70,afb);
string s;
char c;
int stringSize;
cout << "Geef woorden op en stop met STOP"<< endl;
cin >> s;
while(s != "STOP"){
  c = s[0];
  stringSize = s.size();
  vec[stringSize].insert(pair<char,string>(c,s));
  cin>>s;
}
for(int i = 0; i < vec.size();i++){
  cout << vec[i];
}
//VERSIE 2
vector<map<char,string> > vecs(10,afb);
cout << "Geef woorden op en stop met STOP"<< endl;
cin >> s;
while(s!= "STOP"){
  if(stringSize > vecs.size()){
    vecs.push_back(afb);
  }
  c = s[0];
  stringSize = s.size();
  vecs[stringSize].insert(pair<char,string>(c,s));
  cin>>s;
}

  return 0;
}
