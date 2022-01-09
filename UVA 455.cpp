#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        string s, a;
        cin >> s;
        int len = s.size(), n = len + 1, mn = len;
        while(n--) {
            if(n == 0 || len % n != 0) continue;
            string test;
            a = s.substr(0, n);
            //cout << a << endl;
            for(int i = 0; i < len / n; ++i) test += a;
            if(test.compare(s) == 0) mn = min(len, n);
        }
        cout << mn << '\n';
        if(t > 0) cout << '\n';
    }
}
