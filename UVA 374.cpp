#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

ull powMOD(ull b, ull p, ull m)
{
    if(p == 0) return 1;
    ull temp = powMOD(b, p / 2, m);
    ull tempo = ((temp % m) * (temp % m)) % m;
    if(p % 2 == 0) return tempo;
    else return ((b % m) * (tempo % m)) % m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    ull r, b, p, m;
    while(cin >> b >> p >> m) {
        r = powMOD(b, p, m);
        cout << r << endl;
    }
}