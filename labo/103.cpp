#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
	const int AANT = 10;
	int getallen[AANT];
	char letters[AANT];
	string woorden[AANT];
	cout<<"Geef "<<AANT<<" getallen, letters en woorden:";
	cin>>getallen;
	cin>>letters;
	cin>>woorden;
	cout<<getallen<<endl;
	cout<<letters<<endl;
	cout<<woorden<<endl;
	return 0;
}
