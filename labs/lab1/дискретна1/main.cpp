#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
int main ()
{
    bool x, y, z, rez1, rez2, rez3,
    finalrez;
    cout << "put x" << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    if ((x || y) == true) {
        rez1 = true;

    }
    else {
        rez1 = false;
    }
    if ((x == rez1) == true) {
        rez2 = true;
    }
    else {
        rez2 = false;
    }
    if (x == (!(y&&z)) == true) {
        rez3 = true;
    }
    else {
        rez3 = false;
    }
    if ((rez2 == rez1) == true) {
        finalrez = true;
    }
    else {
        finalrez = false;
    }
}

