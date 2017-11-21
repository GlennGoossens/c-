#include <iostream>
#include <iomanip>
using std::cout;
using std::setw;

int main(){
	
	for(int i = 0; i <= 64;i++){
				cout << std::dec << i << setw(5) << std::hex << i << setw(5) << std::oct << i << std::endl;
	}
	
	
	return 0;
}
