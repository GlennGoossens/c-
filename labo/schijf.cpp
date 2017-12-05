#include "schijf.h"
#include "doos.cpp"
Schijf Schijf::Schijf(void){
    ptr = nullptr;
}

Schijf Schijf::~Schijf(void){
    delete ptr;
}