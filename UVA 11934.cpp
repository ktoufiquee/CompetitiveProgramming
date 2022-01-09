#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    while(true) {
        long long int a, b, c, d, n, f, cnt = 0;
        cin >> a >> b >> c >> d >> n;
        if(a == 0 && b == 0 && c == 0 && d == 0 && n == 0) break;
        for(int i = 0; i <= n; ++i) {
            f = a * i * i + b * i + c;
            if(f % d == 0) {
                cnt++;
            }
        }  
        cout << cnt << '\n';
    }
}