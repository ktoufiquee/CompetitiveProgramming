#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int tc = 0; tc < t; ++tc) {
        int n, mx = -1, curr;
        cin >> n;
        while(n--) {
            cin >> curr;
            mx = max(mx, curr);
        }
        cout << "Case " << tc + 1 << ": " << mx << '\n';
    }
}
