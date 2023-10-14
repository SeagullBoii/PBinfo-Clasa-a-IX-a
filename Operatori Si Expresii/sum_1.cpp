#include <iostream>
#include <fstream>

/*
    Pseudocod:

    intreg a,b
    citeste a,b
    scrie a+b
*/

// Trebuie creat fisierul sum.in
// Valorile trebuie scrise cu spatiu intre ele
std::ifstream fin("sum.in");
std::ofstream fout("sum.out");

int a, b;

int main()
{
    fin >> a >> b;
    fout << a + b;

    return 0;
}
