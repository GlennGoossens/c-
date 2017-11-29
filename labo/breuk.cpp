//klassenimplementatie
#include "breuk.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

int mijn_ggd(int a, int b){
        if(a < 0 || b < 0){
              return mijn_ggd(abs(a),abs(b));
              }
        if(a < b){
              return mijn_ggd(b,a);
        }
        if(b == 0){
              return a;
        }
          return mijn_ggd(b,a%b);
}

void Breuk::normaliseer(){
    int gdd = mijn_ggd(teller,noemer);
    teller = teller / gdd;
    noemer = noemer / gdd;
}

void zetNegatiefOm(Breuk & h){
   if(h.noemer < 0){
        h.noemer = abs(h.noemer);
        h.teller -= 2* h.teller;  
    } 
}

void zetNoemerGelijk(Breuk & h,Breuk & m){
if(m.noemer != h.noemer){
        int ver = h.noemer * m.noemer;
        h.teller *= m.noemer;
        m.teller *= h.noemer; 
        h.noemer = ver;
        m.noemer = ver;
    }
}

ostream& operator<<(ostream& out, const Breuk & b){
               out<<b.teller<<" / "<<b.noemer;
               return out;
}


Breuk Breuk::operator-()const{
    Breuk h(*this);
    if(h.teller > 0 && h.noemer < 0){
        h.noemer += 2* h.noemer;
    }else if(h.teller < 0 && h.noemer > 0){
        h.teller += 2* h.teller;
    }else if(h.teller > 0 && h.noemer > 0){
        h.teller -= 2 * h.teller;
    }
    return h;
}

Breuk Breuk::operator-(const Breuk & b)const{
    Breuk h(*this);
    Breuk m(b);
    zetNoemerGelijk(h,m);
    h.teller -= m.teller;
    h.normaliseer();
    zetNegatiefOm(h);
    return h;
}

Breuk & Breuk::operator++(){
    if(noemer < 0){
        noemer += abs(noemer) *2;
    }else{
        teller += noemer;
    }
    return *this;
}

Breuk Breuk::operator++(int a){
    Breuk hulp(*this);
    if(noemer < 0){
        noemer += abs(noemer) * 2;
    }else{
        teller += noemer;
    }
    
    return hulp;

}

Breuk& Breuk::operator-=(const Breuk & b){
    Breuk m(b);
    zetNoemerGelijk(*this,m);
    teller -= m.teller;
    normaliseer();
    zetNegatiefOm(*this);
    return *this;
}

Breuk& Breuk::operator+=(const Breuk & b){
    Breuk m(b);
    zetNoemerGelijk(*this,m);
    teller += m.teller;
    normaliseer();
    zetNegatiefOm(*this);
    return *this;
}

bool Breuk::operator==(const Breuk & b){
    this->normaliseer();
    Breuk h(b);
    h.normaliseer();
    if(this->teller == h.teller && this->noemer == h.noemer){
        return true;
    }else{
        return false;
    }
}

bool Breuk::operator!=(const Breuk & b){
    this->normaliseer();
    Breuk h(b);
    h.normaliseer();
    if(this->teller != h.teller && this->noemer != h.noemer){
        return true;
    }else{
        return false;
    }
}


istream& operator>>(istream & is, Breuk & b){
    string s,t,n,delimeter = "/";
    is >> s;
    int teller = 0,noemer= 0;
    t = s.substr(0, s.find(delimeter));
    size_t pos = s.find(delimeter);
    n = s.substr(pos+delimeter.length());
    stringstream(t) >> teller;
    stringstream(n) >> noemer;
    b.teller = teller;
    b.noemer = noemer;
    b.normaliseer();
    return is;
}


Breuk Breuk::operator+(const Breuk & b)const{
    Breuk h(b);
    Breuk m(*this);
    zetNoemerGelijk(h,m);
    h.teller += m.teller;
    h.normaliseer();
    zetNegatiefOm(h);

   return  h;
}

string is_stambreuk(const Breuk & b){
    Breuk hulp(b);
    hulp.normaliseer();
    if(hulp.teller == 1){
        return "JA";
    }else{
        return "NEEN";
    }
}

Breuk operator+( int a, const Breuk & b ){
     Breuk h(b);
     h.teller += a * h.noemer;
     return h; 
}

bool Breuk::operator<(const Breuk & b)const{
    Breuk h(*this);
    Breuk m(b);
    zetNoemerGelijk(h,m);
    return h.teller < m.teller;
}