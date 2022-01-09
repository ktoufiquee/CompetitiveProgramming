#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    cin >> t;
    while(t--) {
        double c, d, f;
        cin >> c >> d;
        f = ((9.0 / 5) * c) + 32 + d;
        c = (f - 32) * 5.0 / 9;
        cout << fixed << setprecision(2) << "Case " << tc++ << ": " << c << '\n';
    }
}