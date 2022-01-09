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
        int n, k, p;
        cin >> n >> k >> p;
        int num = (k + p) % n;
        if(num == 0) {
            cout << "Case " << tc++ << ": " << n << '\n';
        }
        else {
            cout << "Case " << tc++ << ": " << num << '\n';
        }
    }
}