#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int c, n, tc = 0;
    while(scanf("%lld", &c) && c) {
        n = ceil((3 + pow(9 + 8 * c, 0.5)) / 2);
        printf("Case %lld: %lld\n", ++tc, n);
    }
}