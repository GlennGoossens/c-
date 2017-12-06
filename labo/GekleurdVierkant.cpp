#include "GekleurdVierkant.h"
#include <iostream>

using namespace std;

int GekleurdVierkant::oppervlakte() const{
   return  Vierkant::oppervlakte();
    
}

void GekleurdVierkant::print()const{
    Vierkant::print();
}

int GekleurdVierkant::omtrek() const{
    return GekleurdeRechthoek::omtrek();
    
}