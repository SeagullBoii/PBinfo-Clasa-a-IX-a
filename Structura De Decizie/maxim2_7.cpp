#include <iostream>
#include <fstream>

/*
    Pseudocod:
    intreg a,b
    citeste a,b
    |daca a>b atunci
    |   scrie a
    |altfel
    |   scrie b
    |->
*/

std::ifstream fin("maxim.in");
std::ofstream fout("maxin.out");

int a, b;
int main(int argc, char const *argv[])
{
    fin >> a >> b;

    if (a > b)
        fout << a;
    else
        fout << b;

    return 0;
}
