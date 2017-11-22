#include <memory>
#include <iostream>
using namespace std;
void schrijf(const string * s, int aantal){
cout<<endl;
for(int i=0; i<aantal-1; i++){
cout<<s[i]<<" - ";
}
cout<<s[aantal-1];
}
void verwijder(string * s, int aantal, int volgnr){
if(volgnr < aantal){
for(int i = volgnr; i < aantal-1; i++){
s[i] = s[i+1];
}
}
}
int main(){
string namen[]={"Rein","Ada","Eppo"};
schrijf(namen,3);
verwijder(namen,3,0);
schrijf(namen,3);
return 0;
}
