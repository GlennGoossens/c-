#ifndef RECHTHOEK_H
#define RECHTHOEK_H
#include <iostream>
#include <string>
using namespace std;
class Rechthoek
{
  public:
    Rechthoek(int a = 1, int b = 1) : hoogte(a), breedte(b){};
    void print() const;
    int oppervlakte() const;
    int omtrek() const;

  protected:
    int hoogte;
    int breedte;
};
#endif