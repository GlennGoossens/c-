#ifndef DOOS_H
#define DOOS_H
template<typename T>
class Doos{
    public:
        Doos() :vec(vector<T> v(4)),ptrSchijf(Schijf ** s[3]){};
        Doos(const Doos & d) : ptrNext(d.ptrNext), ptrSchijf(d.ptrSchijf),vec(d.vec) {};
        Doos(vector<T> v): vec(v){};
        Doos(const Doos * d): ptrNext(d){};
        Doos(Schijf * s): ptrSchijf(s){};
        ~Doos();
    private:
        Doos * ptrNext;
        Schijf ** ptrSchijf;
        vector<T> vec;

};
#endif