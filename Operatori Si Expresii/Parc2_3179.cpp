#include <iostream>
using namespace std;

/*
    Pseudocod:

    intreg n,p
    p<--n*n*n*n*n
    scrie p
*/

int n, p;

int main(int argc, char const *argv[])
{
    cin >> n;
    p = n * n * n * n * n;
    cout << p;
    return 0;
}
