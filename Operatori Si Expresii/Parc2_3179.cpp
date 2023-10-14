#include <iostream>

/*
    Pseudocod:

    intreg n,p
    p<--n*n*n*n*n
    scrie p
*/

int n, p;

int main(int argc, char const *argv[])
{
    std::cin >> n;

    p = n * n * n * n * n;

    std::cout << p;
    return 0;
}
