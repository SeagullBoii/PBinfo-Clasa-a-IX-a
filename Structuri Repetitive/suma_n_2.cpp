#include <iostream>

/*
    Pseudocod:

    intreg n,num,s
    citeste n

    s <-- 0

    |pentru i <-- 0, n executa
    |   citeste num
    |   s <-- s+num
    |->

    scrie s
*/

int n, num, s;

int main(int argc, char const *argv[])
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        s += num;
    }
    std::cout << s;

    return 0;
}
