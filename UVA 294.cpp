#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        int s, e;
        int mx = 0, mxcnt = 0, cnt;
        cin >> s >> e;
        for(int i = s; i <= e; i++) {
            cnt = 0;
            for(int j = 1; j * j <= i; j++) {
                if(i % j == 0) {
                    cnt += 2;
                    if(j * j == i) cnt--;
                }
            }
            if(cnt > mxcnt) {
                mxcnt = cnt;
                mx = i;
            }
        }
        cout<< "Between " << s << " and " << e << ", " << mx << " has a maximum of " << mxcnt << " divisors." << endl;
    }
}
