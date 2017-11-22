#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <iterator>
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

//(schrijf elementen uit tussen accolades, met een komma ertussen)
template<typename T>
ostream& operator<<(ostream& out,const set<T> & s){
  typename set<T>::iterator it = s.begin();
  out << "{ " << *it++;
  while(it != s.end()){
    out << " , " << *it++;
  }
  out << " }";
  return out;
}

//(schrijf elementen uit onder elkaar; begin een nieuwe regel voor het eerste element)
template<typename T>
ostream& operator<<(ostream& out,const stack<T> & s){

}

int main(){
  vector<int> v(4,200);
  vector<string> j(4,"glenn");
  Persoon p;
  p.naam = "Glenn";
  p.leeftijd = 22;
  vector<Persoon> pers(1,p);

  vector<vector<int> > vectoren(1,v);
  //schrijf(vectoren);
  cout << vectoren;


  set<string> sets;
  sets.insert("Bert");
  sets.insert("Glenn");
    cout << sets;

  stack<string> stacks;
  stacks.push("Glenn");
  stacks.push("Bert");
  cout << stacks;

  return 0;
}
