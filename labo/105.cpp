#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

string genereer_string(int n){
	const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	string s ="";
	if(n >= 0){
		for(int i = 0;i<n;i++){
			s += alpha[rand()%(sizeof(alpha)-1)];
		}
		return s;
	}else{
		return NULL;
	}
}

void vul_array_met_strings(string * tab,int n,int len){
	for(int i = 0; i<n;i++){
		tab[i] = genereer_string(len);
	}
}

void bepaal_min_en_max(string * tab,int n, string &min,string &max){
	for(int i =0;i<n;i++){
		if(tab[i].compare(min) < 0){
			min = tab[i];
		}else if(tab[i].compare(max)>0){
			max = tab[i];
		}
	}
}

int main(){
	cout << genereer_string(5);
	string strings[5];
	vul_array_met_strings(strings,5,5);
	cout<<endl;
	for(int i = 0;i<5;i++){
		cout << strings[i] << endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	string min = "zzzzzz";
	string max = "aaaaaa";
	bepaal_min_en_max(strings,5,min,max);
	cout<<min<<endl;
	cout<<max<<endl;
	return 0;
}
