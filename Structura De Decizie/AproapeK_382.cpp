#include <iostream>

/*
    Pseudocod:

    intreg n,k,p
    citeste n, k
    p <-- [n/k]

    |daca n-k*p < k*(p+1)-n atunci
    |    scrie k*p
    |altfel
    |    scrie k*(p+1)
    |->
*/

int n, k, p;

int main(int argc, char const *argv[])
{
    std::cin >> n >> k;

    p = n / k;

    if (n - k * p < k * (p + 1) - n)
        std::cout << k * p;
    else
        std::cout << k * (p + 1);

    return 0;
}
