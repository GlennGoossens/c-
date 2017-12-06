#include "mijn_vector.h"
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

void mijn_vector::verdubbel(bool b)
{
    if (b)
    {
        //string / char
    }
    else
    {
        //number
    }
}

template<typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
out << "[ " << v[0];
          for(int i=1; i<v.size(); i++){
              out << " - " << v[i] ;
          }

  out << " ]";
  return out;
}