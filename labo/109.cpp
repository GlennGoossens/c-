#include <iostream>
#include <string>
#include <functional>
using namespace std;

void schrijf(const string s,const int * t, int aantal){
  cout<< s << endl;
  for(int i =0;i < aantal;i++){
  	cout<<t[i] << " ";
  }
  cout<<endl;
}

void vul_array(const int * a,const int *b, int * c,function<int(int,int)> func ,int aantal){
  for(int i = 0;i < aantal;i++){
    c[i] = func(a[i],b[i]);
  }
}

int main(){
	
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int b[] = {0,10,20,30,40,50,60,70,80,90};
	int c[10];

	vul_array(a,b,c,[](int a,int b){return a+b;},10);
	schrijf("SOM: ",c,10);
	vul_array(a,b,c,[](int a,int b){return a*b;},10);
	schrijf("PRODUCT: ",c,10);
	vul_array(a,b,c,[](int a,int b){return a-b;},10);
	schrijf("VERSCHIL: ",c,10);
	
	return 0;
}
