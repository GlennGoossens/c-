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
  vector<vector<int> > vec(0);
  //Maak AANTAL = 5 vectoren die hun lengte bij declaratie kennen (i)
  for(int k = 0; k != 5 ; k++){
    vector<int> vect(k);
    for(int l = 0; l != k;l++){
      vect[l] = l *10;
    }
    vec.push_back(vect);
  }
  for(int m = vec.size(); m != -1; m--){
    cout << endl;
    for(int p = vec[m].size(); p != -1;p--){
      cout << vec[p] << " ";
    }
    cout << endl;
  }

  return 0;
}
