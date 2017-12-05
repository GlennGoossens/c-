#include "doos.h"

Doos Doos::~Doos(){
    delete vec;
    delete ptrNext;
    delete ptrSchijf;
}