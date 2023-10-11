#include <iostream>
using namespace std;

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
    cin >> a >> b;

    if (a * b > 0)
        cout << "da";
    else
        cout << "nu";

    return 0;
}
