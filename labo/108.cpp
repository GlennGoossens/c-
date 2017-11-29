#include <memory>
#include <iostream>
using namespace std;

template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

void schrijf(const unique_ptr<string> * s,int aantal){
	cout<<endl;
	for(int i = 0;i< aantal-1;i++){
		if(s[i]==nullptr){
			cout<<"NULL"<< " - ";
		}else{
			cout<<*s[i]<<" - ";
		}
	}
	if(s[aantal-1] == nullptr){
		cout<<"NULL";
	}else{
		cout<<*s[aantal-1];
	}
}

void verwijder(unique_ptr<string> * s,int aantal,int positie){
	if(positie < aantal-1){
		//verwijder pointer op positie naar positie +1
		for(int i =positie;i<aantal-1;i++){
			s[i] = move(s[s+1]);
			cout<<endl;
		}
	}else if(positie == aantal-1){
		s[positie].reset();
	}
}

int main(){
	unique_ptr<string> pnamen[] = { make_unique<string>("Rein"),
									make_unique<string>("Ada"),
									make_unique<string>("Eppo")};
									
	
	schrijf(pnamen,3);
	verwijder(pnamen,3,0);
	schrijf(pnamen,3);

	return 0;
}
