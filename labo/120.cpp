#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main(){
  vector<string> bijbel;
  queue<int> regels;
  ifstream invBijbel("nbible.txt");
  ifstream invRegels("regelnummers.txt");

  if (!invRegels.is_open()){
      cout<< "fail" << endl;
}  else {
      int getal;
      invRegels >> getal;
      //fail niet vervangen door eof!!
      //ook niet als je weet dat het bestand
      //geen fouten bevat!!
      while (!invRegels.fail()) {
        regels.push(getal);
          invRegels >> getal;
      }
      if (!invRegels.eof()){
          cout << "niet alle regels kunnen lezen"<< endl;
        }
      invRegels.close();
    }

    if (!invBijbel.is_open()){
        cout<< "fail" << endl;
  }  else {
        string regel;
        getline(invBijbel,regel);
        //fail niet vervangen door eof!!
        //ook niet als je weet dat het bestand
        //geen fouten bevat!!
        while (!invBijbel.fail()) {
          bijbel.push_back(regel);
            getline(invBijbel,regel);
        }
        if (!invBijbel.eof()){
            cout << "niet alle regels kunnen lezen"<< endl;
          }
        invBijbel.close();
      }

      int teLezen;
      while(!regels.empty()){
        teLezen = regels.front();
        for(int i = 0; i < bijbel.size();i++){
          if(i == teLezen){
            cout << bijbel[i] << endl;
          }
        }
        regels.pop();

      }

  return 0;
}
