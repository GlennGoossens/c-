#ifndef GEKLEURD_VIERKANT_H
#define GEKLEURD_VIERKANT_H
#include "Vierkant.h"
#include "GekleurdeRechthoek.h"
class GekleurdVierkant : public GekleurdeRechthoek, public Vierkant
{
  public:
    GekleurdVierkant():GekleurdeRechthoek(){};
    GekleurdVierkant(int a):GekleurdeRechthoek(a,a){};
    GekleurdVierkant(int a, string k): GekleurdeRechthoek(a,a,k){};
    void print() const;
    int oppervlakte() const;
    int omtrek() const;
};
#endif