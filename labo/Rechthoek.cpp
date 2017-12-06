#include "Rechthoek.h"
#include <iostream>
using namespace std;

int Rechthoek::omtrek() const{
    return 2*hoogte + 2*breedte;
}

void Rechthoek::print() const{

    cout << "Rechthoek: " + to_string(hoogte) + " op " + to_string(breedte) << endl;
}

int Rechthoek::oppervlakte() const{
    return hoogte * breedte;
}