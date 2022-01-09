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
        double x, y, r;
        cin >> x >> y >> r;
        double pos = sqrt(x * x + y * y);
        cout << fixed << setprecision(2) << r - pos << " " << r + pos << "\n";
    }
}

