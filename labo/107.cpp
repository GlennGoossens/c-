#include <iostream>
using std::cout;
using std::endl;

void schrijf(int a[],int n,bool b = false,char t = ' '){
	if(b){
		cout << a[n-1];
		for(int j = n - 2; j >= 0;j--){
			cout << t << a[j];
		}		
		cout << endl;
	}else{
		cout << a[0];
		for(int i = 1;i<n;i++){
			cout << t << a[i];
		}
		cout << endl;
	}
}

int main(){
	int t[] = {1,3,5,7,9,11,13};
	schrijf(t,7);
	schrijf(t,7,true);
	schrijf(t,7,false,'-');
	schrijf(t,7,true,'-');
	
	return 0;
}
