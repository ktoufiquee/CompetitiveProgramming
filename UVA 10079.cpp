#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int n;
    while(cin >> n && n >= 0) {  
        cout << n * (n + 1) / 2 + 1 << endl;
    }
}