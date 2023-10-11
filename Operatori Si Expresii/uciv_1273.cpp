#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg x,y,suma,ultimaCifra
    citeste x,y
    suma<--x+y
    ultimaCifra<--suma%10
    scrie ultimaCifra
*/

int x, y, suma, ultimaCifra;

int main(int argc, char const *argv[])
{
    cin >> x >> y;

    suma = x + y;
    ultimaCifra = suma % 10;

    cout << ultimaCifra;

    return 0;
}
