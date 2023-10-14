#include <iostream>

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
    std::cin >> a >> b >> x;

    if (x >= a && x <= b)
        std::cout << "DA";
    else
        std::cout << "NU";

    return 0;
}
