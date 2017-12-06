#include <iostream>
#include <string>
#include "Rechthoek.cpp"
#include "GekleurdeRechthoek.cpp"
#include "Vierkant.cpp"
#include "GekleurdVierkant.cpp"
using namespace std;


int main () {
Rechthoek r1;
r1.print();
cout << " oppervlakte: " << r1.oppervlakte() << endl
<< " omtrek: " << r1.omtrek() << endl;
Rechthoek r2(4,6);
r2.print();
cout << " oppervlakte: " << r2.oppervlakte() << endl
<< " omtrek: " << r2.omtrek() << endl;

GekleurdeRechthoek gr1;
gr1.print();
cout << " oppervlakte: " << gr1.oppervlakte() << endl
<< " omtrek: " << gr1.omtrek() << endl;
GekleurdeRechthoek gr2(5,7);
gr2.print();
cout << " oppervlakte: " << gr2.oppervlakte() << endl
<< " omtrek: " << gr2.omtrek() << endl;

GekleurdeRechthoek gr3(6,9,"rood");
gr3.print();
cout << " oppervlakte: " << gr3.oppervlakte() << endl
<< " omtrek: " << gr3.omtrek() << endl;

Vierkant v1;
v1.print();
cout << " oppervlakte: " << v1.oppervlakte() << endl
<< " omtrek: " << v1.omtrek() << endl;
Vierkant v2(10);
v2.print();
cout << " oppervlakte: " << v2.oppervlakte() << endl
<< " omtrek: " << v2.omtrek() << endl;

GekleurdVierkant gv1;
gv1.print();
cout << " oppervlakte: " << gv1.oppervlakte();
cout << " omtrek: " << gv1.omtrek();
GekleurdVierkant gv2(12);
gv2.print();
cout << " oppervlakte: " << gv2.oppervlakte();
cout << " omtrek: " << gv2.omtrek();
GekleurdVierkant gv3(15,"geel");
gv3.print();
cout << " oppervlakte: " << gv3.oppervlakte();
cout << " omtrek: " << gv3.omtrek();

return 0;
}