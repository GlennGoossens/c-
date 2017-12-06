#ifndef VIERKANT_H
#define VIERKANT_H
#include "Rechthoek.h"
class Vierkant : public Rechthoek
{
  public:
    Vierkant() : Rechthoek(){};
    Vierkant(int a) : Rechthoek(a, a){};
    void print() const;
};
#endif