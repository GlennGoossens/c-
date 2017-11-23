#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
  //Maak een map aan, die karakters afbeeldt op verzamelingen met woorden
  map<char,int> afb;
  string s;
  char c;
  cout << "Geef woorden op en stop met STOP"<< endl;
  cin >> s;
  while(s != "STOP"){
    c = s[0];
    afb[c]++;
    cin>>s;
  }
  cout << "Geef een letter in" << endl;
  cin >> c;
  cout << afb[c] << endl;
  return 0;
}
