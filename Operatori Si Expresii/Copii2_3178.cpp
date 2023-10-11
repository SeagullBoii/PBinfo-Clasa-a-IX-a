#include <iostream>
using namespace std;

/*
    Pseudocod:
    intreg F,B,N,paginiF,paginiB
    citeste F,B,n
    paginiF<--3*F*n
    paginiB<--3*B*n
    scrie paginiF+paginiB
*/

int F, B, n, paginiF, paginiB;

int main(int argc, char const *argv[])
{
    cin >> F >> B >> n;

    paginiF = 3 * F * n;
    paginiB = 2 * B * n;

    cout << paginiF + paginiB;

    return 0;
}
