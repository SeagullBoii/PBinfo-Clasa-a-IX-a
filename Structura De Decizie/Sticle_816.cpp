#include <iostream>

/*
    Pseudocod:

    intreg x,y,n
    citeste x,y
    |daca y%x=0 atunci
    |    n<--y/x
    |altfel
    |    n<--y/x+1
    |->
    scrie n
*/

int x, y, n;

int main(int argc, char const *argv[])
{
    std::cin >> x >> y;

    if (y % x == 0)
        n = y / x;
    else
        n = y / x + 1;

    std::cout << n;

    return 0;
}
