#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
  set<string> s;
  string str;
  cout << "Geef enkele woorden in en eindig met STOP"<< endl;
  cin >> str;
  while(str != "STOP"){
    s.insert(str);
    cin >> str;
  }

  for (string woord : s){
     cout << woord << endl;
   }
  cout << endl;
  cout << endl << "nu worden de oneven elementen verwijdert" << endl;

  int i = 0;
  for(set<string>::iterator iter = s.begin(); iter != s.end();iter++){
    if(i % 3 == 0){
      iter = s.erase(iter);
    }
    i++;
  }

cout << endl << "de eind set wordt nu geprint :" << endl;
  for (string woord : s)
     cout << woord << endl;

  return 0;
}
