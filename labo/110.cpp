#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char c;
	int i;
	int alpha[26] = {0};
	ifstream inv;
	inv.open("lord.txt");
	if(inv.is_open()) cout<< "openen gelukt"<<endl;
	while(! inv.fail()){
		c = inv.get();
		if(islower(c)){
			i = c - 'a';
		cout << i << " - "<< c <<endl;
		alpha[i]++;
		}

	}

	for(int i =0; i < 26;i++){
		char ch = 'a' +i;
		cout << alpha[i] << "times - " << ch <<endl;
	}
	inv.close();
	return 0;
}
