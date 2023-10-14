#include <iostream>

/*
    Pseudocod:

    intreg a,sum

    |cat timp a>0 executa
    |   sum <-- sum + a % 10
    |   a <-- [a/10]
    |->

    scrie sum
*/

int a, sum;

int main(int argc, char const *argv[])
{
    std::cin >> a;

    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }

    std::cout << sum;

    return 0;
}
