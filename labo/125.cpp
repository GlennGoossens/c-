#include "mijn_vector.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    mijn_vector<int> v{10, 20, 30};
    cout << v;
    /*v.verdubbel();
    cout << endl
         << "na verdubbelen zonder parameter: " << v;
    v.verdubbel(true);
    cout << endl
         << "na verdubbelen met param true: " << v;
    mijn_vector<int> w(v);
    cout << endl
         << "een kopie van v: " << w;
    mijn_vector<double> u(7);
    cout << endl
         << "een vector met 7 default-elt: " << u;
    for (int i = 0; i < u.size(); i++)
    {
        u[i] = i * 1.1;
    }
    cout << endl
         << "na opvullen met getallen: " << u;
    u.verdubbel();
    cout << endl
         << "na verdubbelen zonder parameter: " << u;
    mijn_vector<string> s{"papageno", "appelboom", "poezenstaart"};
    cout << endl
         << "een vector met woorden: " << s;
    s.verdubbel();
    cout << endl
         << "na verdubbelen zonder parameter: " << s;
    s.verdubbel(true);
    cout << endl
         << "na verdubbelen met param true: " << s;
         */
    return 0;
}