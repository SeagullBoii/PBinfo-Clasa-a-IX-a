#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg a,b,c,d,e,suma,minim
    citeste a,b,c,d,e
    suma = a+b+c+d+e

    minim = a
    |daca b < minim atunci
    |    minim <-- b
    |->
    |daca c < minim atunci
    |    minim <-- c
    |->
    |daca d < minim atunci
    |    minim <-- d
    |->
    |daca e < minim atunci
    |    minim <-- e
    |->
    suma <-- suma - minim

    |daca a = minim atunci
    |   a <-- 10001
    |->
    |daca b = minim atunci
    |   b <-- 10001
    |->
    |daca c = minim atunci
    |   c <-- 10001
    |->
    |daca d = minim atunci
    |   d <-- 10001
    |->
    |daca e = minim atunci
    | e <-- 10001
    |->

    minim = a
    |daca b < minim atunci
    |    minim <-- b
    |->
    |daca c < minim atunci
    |    minim <-- c
    |->
    |daca d < minim atunci
    |    minim <-- d
    |->
    |daca e < minim atunci
    |    minim <-- e
    |->
    suma <-- suma - minim

    scrie suma
*/

int a, b, c, d, e, suma, minim;
int main(int argc, char const *argv[])
{

    cin >> a >> b >> c >> d >> e;
    suma = a + b + c + d + e;

    minim = a;
    if (b < minim)
        minim = b;
    if (c < minim)
        minim = c;
    if (d < minim)
        minim = d;
    if (e < minim)
        minim = e;
    suma -= minim;

    /*
    Cerinta precizeaza ca limita este 10000 inclusiv, deci eliminam minimul,
    facandu-l mai mare decat orice numar pus:
    */
    if (a == minim)
        a = 10001;
    if (b == minim)
        b = 10001;
    if (c == minim)
        c = 10001;
    if (d == minim)
        d = 10001;
    if (e == minim)
        e = 10001;

    minim = a;
    if (b < minim)
        minim = b;
    if (c < minim)
        minim = c;
    if (d < minim)
        minim = d;
    if (e < minim)
        minim = e;
    suma -= minim;

    cout << suma;

    return 0;
}
