#include <iostream>

/*Pseudocod:

    intreg a,b,c,max,min,mm
    citeste a,b,c

    |daca a>b atunci
    |   max <-- a
    |   min <-- b
    |altfel
    |   max <-- b
    |   min <-- a
    |->

    |daca c>max tunci
    |   max <-- c
    |->

    |altfel c<min atunci
    |   min <-- c
    |->

    mm <-- max-min
    scrie mm
*/

int a, b, c, max, min, mm;

int main(int argc, char const *argv[])
{
    std::cin >> a >> b >> c;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (max < c)
        max = c;
    if (min > c)
        min = c;

    mm = max - min;

    std::cout << mm;

    return 0;
}
