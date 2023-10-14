#include <iostream>

/*
    Pseudocod:

    intreg a, r, v, g
    citeste a
    r<--2*a
    v<--r-3
    g<--a+r+v
    scrie g
*/

int a, r, v, g;
int main(int argc, char const *argv[])
{
    std::cin >> a;

    r = 2 * a;
    v = r - 3;
    g = a + r + v;

    std::cout << g;

    return 0;
}
