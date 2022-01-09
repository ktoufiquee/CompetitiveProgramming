#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    long long int s, n;
    while(cin >> s >> n) {
        long long int mx = -1;
        bool swapped = false;
        if(s > n) {
            swap(s, n);
            swapped = true;
        }
        for(long long int i = s; i <= n; ++i) {
            long long int r = i, count = 0;
            while(r != 1) {
                if(r % 2) {
                    r = (3 * r) + 1;
                }
                else {
                    r /= 2;
                }
                count++;
            }
            mx = max(mx, count + 1);
        }
        if(swapped) {
            swap(s, n);
        }
        cout << s << " " << n << " " << mx << '\n';
    }
}