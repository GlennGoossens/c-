#ifndef GEKLEURDE_RECHTHOEK_H
#define GEKLEURDE_RECHTHOEK_H
#include <string>
#include <iostream>
#include "Rechthoek.h"
using namespace std;
class GekleurdeRechthoek : public Rechthoek
{
  public:
    GekleurdeRechthoek() : Rechthoek(), kleur("onbekend"){};
    GekleurdeRechthoek(int a, int b) : Rechthoek(a, b), kleur("onbekend"){};
    GekleurdeRechthoek(int a, int b, string k) : Rechthoek(a, b), kleur(k){};
    void print() const;

  private:
    string kleur;
};

#endif