#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t;
    cin >> t;
    while(t--) {
        int n, total = 0;
        cin >> n;
        while(n--) {
            int a, b, c;
            cin >> a >> b >> c;
            total += (a * c);
        }
        cout << total << '\n';
    }
}

