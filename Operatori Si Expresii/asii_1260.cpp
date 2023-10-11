#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg a,b,s,d,p,c
    citeste a,b
    s<-- a+b
    d<-- a-b
    p<-- a*b
    c<-- a/b
    scrie s,d,p,c
*/

int a, b, s, d, p, c;

int main(int argc, char const *argv[])
{
    cin >> a >> b;

    s = a + b;
    d = a - b;
    p = a * b;
    c = a / b;

    cout << s << ", " << d << ", " << p << ", " << c << ".";

    return 0;
}
