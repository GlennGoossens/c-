#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  //Maak een map aan, die karakters afbeeldt op verzamelingen met woorden
  map<char,unordered_set<string> > afb;
  string s;
  char c;
  cout << "Geef woorden op en stop met STOP"<< endl;
  cin >> s;
  while(s != "STOP"){
    afb[s[0]].insert(s);
    cin>>s;
  }
  cout << "Geef een letter in" << endl;
  cin >> c;
  if(afb.count(c) == 1){
    cout << "er waren " << m[c].size()<<" verschillende woorden met die startletter"<<endl;
  }else{
    cout << "er was geen enkel woord met die startletter"<<endl;
  }
  return 0;
}
