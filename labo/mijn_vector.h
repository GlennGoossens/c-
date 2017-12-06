#ifndef MIJN_VECTOR_H
#define MIJN_VECTOR_H
#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class mijn_vector : public vector<T>{
    public:
        using vector<T>::vector;
        void verdubbel(bool b = false);
    private:

};

#endif