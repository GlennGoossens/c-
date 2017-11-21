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
		cout<<*s[i].get()<<" - ";
	}
	cout<<*s[aantal-1].get();
	cout<<endl;
}

void verwijder(const unique_ptr<string> * s,int aantal,int positie){
	if(positie < aantal){
		//verwijder pointer op positie naar positie +1
		for(int i =0;i<aantal-1;i++){
			*s[i] = *s[i+1];
			cout<<endl;
		}
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
