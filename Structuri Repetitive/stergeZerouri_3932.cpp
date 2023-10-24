#include <iostream>

/*
    Pseudocod:

    intreg n
    citeste n

    |cat timp n % 10 = 0 atunci
    |   n <-- [n/10]
    |->

    scrie n
*/

int main(int argc, char const *argv[])
{
    int n;

    std::cin >> n;

    while (n % 10 == 0)
    {
        n /= 10;
    }

    std::cout << n;

    return 0;
}
