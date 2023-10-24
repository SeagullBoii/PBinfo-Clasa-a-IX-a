#include <iostream>

/*
    Pseudocod:

    intreg n,m,a,b,P
    a <-- [n/2]
    b <-- [m/2]

    |daca n%2=1 atunci
    |   a<--a+1
    |->
    |daca m%2=1 atunci
    |   b<--b+1
    |->

    p<-- a*b

    scrie p
*/

int n, m, P;

int main(int argc, char const *argv[])
{
    std::cin >> n >> m;

    int a = n / 2;
    int b = m / 2;

    if (n % 2 == 1)
        a++;
    if (m % 2 == 1)
        b++;

    P = a * b;

    std::cout << P;

    return 0;
}
