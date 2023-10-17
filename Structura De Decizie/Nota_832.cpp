#include <iostream>

/*
    Pseudocod:

    intreg n
    citeste n
    |daca n < 5 atunci
    |   scrie "corigent"
    |altfel
    |   scrie "promovat"
    |->

*/

int n;
int main(int argc, char const *argv[])
{
    std::cin >> n;

    if (n < 5)
        std::cout << "corigent";
    else
        std::cout << "promovat";

    return 0;
}
