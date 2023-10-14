#include <iostream>

/*
    Pseudocod:

    intreg a,b
    citeste a,b

    |daca a*b>0 atunci
    |    scrie "da"
    |altfel
    |    scrie "nu"
    |->
*/

int a, b;

int main(int argc, char const *argv[])
{
    std::cin >> a >> b;

    if (a * b > 0)
        std::cout << "da";
    else
        std::cout << "nu";

    return 0;
}
