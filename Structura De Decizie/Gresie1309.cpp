#include <iostream>

/*
    Pseudocod:

        intreg a,b,d,x,y
        citeste a,b,d
        x<--a/d
        y<--b/d

        |daca a%d != 0 atunci
        |   x<--x+1
        |->

        |daca b%d !=0 atunci
        |   y<--y+1
        |->

        scrie x*y
*/

int a, b, d;
int main(int argc, char const *argv[])
{
    std::cin >> a >> b >> d;

    int x = a / d; // Placile de pe directia a
    int y = b / d; // Placile de pe directia b

    if (a % d != 0)
        x++;
    if (b % d != 0)
        y++;

    std::cout << x * y; // nr de placi

    return 0;
}
