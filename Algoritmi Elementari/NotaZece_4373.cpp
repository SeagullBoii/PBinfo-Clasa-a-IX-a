#include <iostream>

/*
    Pseudocod:

        intreg a,b,a1,b1,s
        citeste a,b
        a1<--a
        b1<--b

        |cat timp a1 != b1 executa
        |   |daca a1>b1 atunci
        |   |   b1<--b1+b
        |   |altfel
        |   |   a1<--a1+a
        |   |->
        |->

        s <-- a1/a - 1 + b1/b - 1
        scrie s
*/

int a, b, a1, b1, s;

int main(int argc, char const *argv[])
{
    std::cin >> a >> b;

    a1 = a;
    b1 = b;

    while (a1 != b1)
    {
        if (a1 > b1)
            b1 += b;
        else
            a1 += a;
    }

    s = a1 / a - 1 + b1 / b - 1;
    std::cout << s;

    return 0;
}
