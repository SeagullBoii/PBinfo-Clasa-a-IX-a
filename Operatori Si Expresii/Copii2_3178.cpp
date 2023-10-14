#include <iostream>

/*
    Pseudocod:
    intreg F,B,N,paginiF,paginiB
    citeste F,B,n
    paginiF<--3*F*n
    paginiB<--3*B*n
    scrie paginiF+paginiB
*/

int F, B, n, paginiF, paginiB;

int main(int argc, char const *argv[])
{
    std::cin >> F >> B >> n;

    paginiF = 3 * F * n;
    paginiB = 2 * B * n;

    std::cout << paginiF + paginiB;

    return 0;
}
