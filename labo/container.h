#include <iostream>
#include <vector>
#include <set>
#include <stack>
#include <string>
#include <iterator>
#include <map>
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
  if(v.empty()){
    out << " ";
    return out;
  }
  out << "[ " << v[0];
          for(int i=1; i<v.size(); i++){
              out << " | " << v[i] ;
          }

  out << " ]";
  return out;
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
ostream& operator<<(ostream& out,const stack<T> &  s){
  stack<T> h = s;
  while(!h.empty()){
    out << h.top() << endl;
    h.pop();
  }
  return out;
}

//map,waarbij je dus zowel type van sleutel als type van bijhorende data ongespecifieerd laat
//(schrijf sleutels onder elkaar uit; elke sleutel wordt gevolgd door een pijltje en zijn bijhorende data)
template<typename K,typename T>
ostream& operator<<(ostream& out,const map<K,T> & m){
  for(pair<K,T> p : m){
    out << p.first << " -> " << p.second << endl;
  }
  return out;
}
