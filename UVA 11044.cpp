#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << (a / 3) * (b / 3) << "\n"; 
    }
}