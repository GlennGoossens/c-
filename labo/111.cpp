#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv){
	// 2 bestanden inlezen en wisselend een regel schrijven naar een nieuw bestand mix.
	// 2 infiles
	// iterator met modolo van aantal args
	// schrijven naar nieuwe bestand
	
	//nieuw bestand aanmaken
    ofstream mix;
    mix.open("mix.txt");
	
	if (argc == 1)
       cout << "geen extra strings op commandolijn";
    //Bestanden op de commandolijn openen
    ifstream str1, str2;
    str1.open(argv[1]);
    str2.open(argv[2]);
    string lijn1,lijn2;
    int i = 0;
    
    //nieuw bestand invullen
    int modulus = argc -1;
    
    if(str1.tellg() > str2.tellg()){
    	while(str1.good() && getline(str2,lijn2) && getline(str1,lijn1)){
    		cout<< lijn1;
    		cout<<lijn2;
    		if(i%modulus == 0){
    			cout << lijn1;
    			mix << lijn1;
			}else{
				cout << lijn2;
				mix << lijn2;
			}
			i++;
		}
	}
    
    
    str1.close();
    str2.close();
    mix.close();
    
	
	
	return 0;
}
