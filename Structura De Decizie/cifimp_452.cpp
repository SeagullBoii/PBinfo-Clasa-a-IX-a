#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg a,c1,c2,c3,cifreImpare
    citeste a

    c1<--[a/100]
    c2<--[a/10]%10
    c3<--a%10

    |daca c1%2=1 atunci
    |   cifreImpare <-- cifreImpare + 1
    |->
    |daca c2%2=1 atunci
    |   cifreImpare <-- cifreImpare + 1
    |->
    |daca c3%2=1 atunci
    |   cifreImpare <-- cifreImpare + 1
    |->

    scrie cifreImpare
*/

int a, c1, c2, c3, cifreImpare;

int main(int argc, char const *argv[])
{
    cin >> a;

    c1 = a / 100;
    c2 = a / 10 % 10;
    c3 = a % 10;

    if (c1 % 2 == 1)
        cifreImpare++;
    if (c2 % 2 == 1)
        cifreImpare++;
    if (c3 % 2 == 1)
        cifreImpare++;

    cout << cifreImpare;

    return 0;
}
