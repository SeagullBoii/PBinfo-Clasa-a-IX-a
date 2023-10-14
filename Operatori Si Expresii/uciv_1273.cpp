#include <iostream>

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
    std::cin >> x >> y;

    suma = x + y;
    ultimaCifra = suma % 10;

    std::cout << ultimaCifra;

    return 0;
}
