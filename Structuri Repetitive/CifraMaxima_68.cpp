#include <iostream>

/*
    Pseudocod:

    intreg n,cmax
    cmax<--0
    citeste n

    |cat timp n!=0 executa
    |   |daca cmax < n % 10 atunci
    |   |   cmax<--n%10
    |   |->
    |   n<--[n/10]
    |->
    scrie cmax
*/

int main(int argc, char const *argv[])
{
    int n, cmax = 0;

    std::cin >> n;

    while (n)
    {
        if (cmax < n % 10)
            cmax = n % 10;
        n /= 10;
    }

    std::cout << cmax;

    return 0;
}
