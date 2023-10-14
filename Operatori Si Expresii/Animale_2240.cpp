#include <iostream>

/*
    Pseudocod:

    intreg c,p,g
    citeste c
    p<--c*2
    g<--p*2
*/

int c, p, g;
int main(int argc, char const *argv[])
{
    std::cin >> c;

    p = c * 2;
    g = p * 2;

    std::cout << c + p + g;

    return 0;
}
