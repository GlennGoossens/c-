#include "GekleurdeRechthoek.h"
#include <iostream>

using namespace std;

void GekleurdeRechthoek::print()const{
    Rechthoek::print();
    cout << "kleur = " << kleur;
}

