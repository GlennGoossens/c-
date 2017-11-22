#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Persoon {
  int leeftijd;
  string naam;
};

ostream& operator<<(ostream& out, const Persoon & p){
               out<<p.naam<<" ("<<p.leeftijd<<" j)";
               return out;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T> & v){
  out << "[ " << v[0];
          for(int i=1; i<v.size(); i++){
              out << " | " << v[i] ;
          }

  out << " ]";
  return out;
}

template<typename T>
void schrijf(vector<T>& v){
  cout << "[ " << v[0];
          for(int i=1; i<v.size(); i++){
              cout << " | " << v[i] ;
          }

  cout << " ]";
}

int main(){
  vector<int> v(4,200);
  vector<string> j(4,"glenn");
  Persoon p;
  p.naam = "Glenn";
  p.leeftijd = 22;
  vector<Persoon> pers(1,p);

  vector<vector<int> > vectoren(1,v);
  schrijf(vectoren);

  return 0;
}
