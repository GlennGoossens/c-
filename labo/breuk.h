#ifndef BREUK_H
#define BREUK_H
#include <iostream>
#include <iomanip>
using namespace std;
class Breuk{
    public:
        Breuk(int t = 1, int n = 1) : teller(t) , noemer(n){};
        Breuk(const Breuk & b) : teller(b.teller), noemer(b.noemer){};
        friend ostream& operator<<(ostream& , const Breuk &);
        Breuk operator+(const Breuk &)const;
        Breuk operator-()const;
        Breuk operator-(const Breuk &)const;
        Breuk & operator-=(const Breuk &);
        Breuk & operator+=(const Breuk &);
        Breuk & operator++();
        Breuk operator++(int);
        bool operator==(const Breuk &);
        bool operator!=(const Breuk &);
        friend istream& operator>>(istream &, Breuk &);
    private:
        friend void zetNegatiefOm(Breuk &);
        friend void zetNoemerGelijk(Breuk &,Breuk &);
        void normaliseer();
        int teller;
        int noemer;
};
#endif