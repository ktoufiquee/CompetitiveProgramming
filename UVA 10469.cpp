#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    unsigned long long int a, b;
    while(cin >> a >> b) {
        cout << (a ^ b) << "\n";
    }
}