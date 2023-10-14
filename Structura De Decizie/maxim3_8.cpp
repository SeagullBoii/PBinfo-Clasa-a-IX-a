#include <iostream>
#include <fstream>

/*
    Pseudocod:

    intreg a,b,c,max;

    |daca a > b atunci
    |    max <-- a
    |altfel
    |    max <-- b
    |->

    |daca max < c atunci
    |    max <-- c
    |->

    scrie max
*/

// Trebuie creat fisierul sum.in
// Valorile trebuie scrise cu spatiu intre ele
std::ifstream fin("maxim3.in");
std::ofstream fout("maxim3.out");

int a, b, c, max;

int main(int argc, char const *argv[])
{
    fin >> a >> b >> c;

    if (a > b)
        max = a;
    else
        max = b;

    if (max < c)
        max = c;

    fout << max;

    return 0;
}
