#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg a,b,x
    citeste a,b,x

    |daca x>=a si x<=b atunci
    |   scrie "DA"
    |altfel
    |   scrie "NU"
    |->
*/

int a, b, x;

int main(int argc, char const *argv[])
{
    cin >> a >> b >> x;

    if (x >= a && x <= b)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
