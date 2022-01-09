#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        int n, h;
        cin >> n >> h;
        int len = n - h;
        for(int i = 0; i < len; ++i) s += '0';
        for(int i = 0; i < h; ++i) s += '1';
        do {
            cout << s << endl;
        } while(next_permutation(s.begin(), s.end()));
        if(t > 0) cout << endl;
    }
}
