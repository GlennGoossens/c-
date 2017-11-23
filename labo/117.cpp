#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "container.h"
using namespace std;

int geef_woorden_bestand(const string & s){
  ifstream inv(s);
  int aantal = 0;
  if (!inv.is_open())
      return -1;
  else {

      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s.size()>0)
             aantal++;
          inv >> s;
      }
    }
      return aantal;
}

void schrijf_woorden_uit(const int & i,const int & j,const string & s ){
  ifstream inv(s);
  int aantal =0;
  if (!inv.is_open())
      cout << "fail";
  else {

      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s.size()>0)
             aantal++;
          if(aantal > i && aantal < j){
            cout << s << " ";
          }
          inv >> s;
      }
    }
}

void schrijf_omgekeerd(const string & s){
  ifstream inv(s);
  vector<string> v;
  if(!inv.is_open()){
    cout << "fail"<<endl;
  }else{
    string s;
    inv >> s;
    while(!inv.fail()){
      v.push_back(s);
      inv >> s;
    }
  }
  for(int i = v.size();i > 0;i--){
    cout << v[i] << endl;
  }
}

int frequenties(const string & w,const string & s ){
  ifstream inv(s);
  int aantal =0;
  if (!inv.is_open()){
      cout << "fail";
      return -1;
}  else {
      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s == w)
             aantal++;

          inv >> s;
      }
      return aantal;
    }
}

void geef_vindplaatsen(const string & w,const string & s ){
  ifstream inv(s);
  int aantal =0;
  if (!inv.is_open())
      cout << "fail";
  else {
      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s.size()>0)
             aantal++;
          if(s == w){
            cout << w << " vind je op plaats "<< aantal << endl;
          }
          inv >> s;
      }
    }
}

void geef_frequenties(const string & s ){
  ifstream inv(s);
  map<string,int> m;
  int aantal =0;
  if (!inv.is_open())
      cout << "fail";
  else {
      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s.size()>0)
             m[s]++;
          inv >> s;
      }
    }

    cout << m;
}

void geef_alle_vindplaatsen(const string & s ){
  ifstream inv(s);
  int aantal =0;
  if (!inv.is_open()){
      cout << "fail";
  }else {
      string s;
      inv >> s;
      while (!inv.fail()) {
          if (s.size()>0){
             aantal++;
             cout << s << " vind je op plaats "<< aantal << endl;
          }
          inv >> s;
      }

    }
}

int main(){

  //(a) Geef het aantal verschillende woorden in het bestand.
cout << endl;
  cout << geef_woorden_bestand("lord.txt");
cout << endl;
  //(b) Schrijf de woorden uit vanaf het i-de woord tot en met het j-de woord, waarbij i en j gekend zijn voor je aan de opdracht begint.
cout << endl;
  schrijf_woorden_uit(5,10,"lord.txt");
cout << endl;
  //(c) Schrijf het bestand achterstevoren uit.
  cout << endl;
  schrijf_omgekeerd("lord.txt");
cout << endl;
  //(d) Geef de frequentie van  ́e ́en woord dat gekend is voor je aan de opdracht begint.
  cout << endl;
  cout << frequenties("ever","lord.txt");
  cout << endl;
  //(e) Geef de vindplaats(en) van  ́e ́en woord dat gekend is voor je aan de opdracht begint.
  cout << endl;
  geef_vindplaatsen("ever","lord.txt");
  cout << endl;
  //(f) Geef de frequenties van alle woorden uit het bestand.
  cout << endl;
  geef_frequenties("lord.txt");
  cout << endl;
  //(g) Geef de vindplaats(en) van alle woorden uit het bestand.
  cout << endl;
  geef_alle_vindplaatsen("lord.txt");
  cout << endl;
}
