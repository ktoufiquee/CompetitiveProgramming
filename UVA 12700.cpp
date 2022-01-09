#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t, tc = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, d = 0, b = 0, w = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i] == 'A') a++;
            if(s[i] == 'W') w++;
            if(s[i] == 'T') d++;
            if(s[i] == 'B') b++;
        }
        cout << "Case " << tc++ << ": ";
        if(b > 0 && a >=0 && d == 0 && w == 0) {
            cout << "BANGLAWASH\n";
        }
        else if(w > 0 && a >=0 && d == 0 && b == 0) {
            cout << "WHITEWASH\n";
        }
        else if(a == n) {
            cout << "ABANDONED\n";
        }
        else if(d == n || b == w) {
            cout << "DRAW " << b << " " << d << "\n";
        }
        else if(b > w) {
            cout << "BANGLADESH " << b << " - " << w << "\n";
        }
        else {
            cout << "WWW " << w << " - " << b << "\n";
        }
    }
}
