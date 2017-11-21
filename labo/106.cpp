#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;



typedef struct person{
	string naam;
	int leeftijd;
	double lengte;
}person;

template <class T>
T grootste(T array[],int n){
	T max = array[0];
	for(int i = 0; i < n;i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	return max;
}

void initialiseer(person &p, string n, int l, double len){
	p.leeftijd = l;
	p.lengte = len;
	p.naam = n;
}

void print(person p){
	cout << p.naam <<", " << p.leeftijd <<" jaar, "<< p.lengte <<"m.\n";
}

int main(){
	double getallen[5] = {5.5,7.7,2.2,9.9,9.8};
	string woorden[3] = {"geloof","hoop","de liefde"};
	person personen[3];
	string namen[3]={"Samuel","Jente","Idris"};
	int leeftijden[3] = {12,22,42};
	double lengtes[3] = {1.52,1.81,1.73};
	for(int i = 0; i < 3;i++){
		initialiseer(personen[i],namen[i],leeftijden[i],lengtes[i]);
	}
	

	cout << grootste(getallen,5) << endl;
	cout << "De grootste van de drie is " << grootste(woorden,3) << "." << endl;
	cout << endl << endl;
	for(int j = 0;j<3;j++){
		print(personen[j]);
	}
	return 0;
}
