#include <iostream>
#include <fstream>
#include <string>

/*
    Pseudocod:

    intreg K,N,A,C,pAble,pNegre
    citeste C, K, N

    |daca (C = 1) atunci
    |   pNegre <-- K*K+(K-1)*(K-1)
    |   pAble <-- pNegre-1
    |   scrie pAlbe+pNegre
    |altfel
    |   |pentru i <-- 0,N+1 executa
    |   |   A <-- A + i*i + (i-1)*(i-1) -1
    |   |->
    |   scrie 2*A+1
    |->
*/

std::ifstream fin("formula1.in");
std::ofstream fout("formula1.out");

int K, N, A, C;
int main(int argc, char const *argv[])
{
    fin >> C;

    std::string line;
    std::getline(fin, line);

    fin >> K >> N;

    if (C == 1)
    {
        int pAlbe, pNegre;
        pNegre = K * K + (K - 1) * (K - 1);
        pAlbe = pNegre - 1;
        fout << pAlbe + pNegre;
    }
    else
    {
        for (int i = 0; i <= N; i++)
        {
            A += i * i + (i - 1) * (i - 1) - 1;
        }
        fout << 2 * A + 1;
    }

    return 0;
}
