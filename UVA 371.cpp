#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a, b;
    while(cin >> a >> b) {
        if(a == 0 && b == 0) break;
        if(a > b) swap(a, b);
        long long int mx = -1, mxcnt = 0, cnt = 0; 
        for(long long int i = a; i <= b; ++i) {
            long long int n = i;
            while(true) {
                if(n % 2) n = (3 * n) + 1;
                else n /= 2;
                cnt++;
                if(n == 1) break;
            }
            if(cnt > mxcnt) {
                mxcnt = cnt;
                mx = i;
            }
            cnt = 0;
        }
        cout << "Between " << a << " and " << b << ", " << mx << " generates the longest sequence of " << mxcnt << " values.\n"; 
    }
}

