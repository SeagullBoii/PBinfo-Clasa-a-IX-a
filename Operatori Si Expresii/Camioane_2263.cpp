#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg t1, t2, n, m, z, c1, c2
    citeste t1, t2, n, m, z
    c1<--t1*n*z
    c2<--t2*m*z
    scrie c1+c2
*/

int t1, t2, n, m, z, c1, c2; // c1, c2 - cantitatile transportate de fiecare tip

int main(int argc, char const *argv[])
{
    cin >> t1 >> t2 >> n >> m >> z;

    c1 = t1 * n * z;
    c2 = t2 * m * z;

    cout << c1 + c2;

    return 0;
}
