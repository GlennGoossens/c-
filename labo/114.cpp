#include "container.h"

int main(){
  stack<string> str;
  str.push("een");
  str.push("twee");
  str.push("drie");

  cout<< str << endl;
  cout<< str << endl;

  vector<string> v;
  vector<string> vectoren[5] = {v,v,v,v,v};

  vector<string> inhoud(4,"glenn");
  vectoren[1] = inhoud;
  for(int j = 0; j < 4;j++){
    cout << vectoren[j] << endl;;
  }

  //maak een lege vector van vectoren aan
  vector<vector<T> > vec();
  //Maak AANTAL = 5 vectoren die hun lengte bij declaratie kennen (i)
  for(int k = 0; k != 5 ; i++){
    vector<T> vect(i);
    vec.push_back(vect);
  }

  return 0;
}
