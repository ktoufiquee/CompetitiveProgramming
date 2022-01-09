#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, r;
        cin >> n >> ws;
        map<string, pair<string, int> > c;
        map<string, pair<string, int> >::iterator it, index;
        string candidate, party;
        for(int i = 0; i < n; ++i) {
            getline(cin, candidate);
            getline(cin, party);
            //cout << candidate << " " << party << '\n';
            c[candidate].first = party;
        }
        cin >> r >> ws;
        int mx = 0, cnt = 0;
        for(int i = 0; i < r; ++i) {
            getline(cin, candidate);
            c[candidate].second++;
            mx = max(mx, c[candidate].second);
        }
        for(it = c.begin(); it != c.end(); ++it) {
            if(it -> second.second == mx) {
                cnt++;
                index = it;
            }
        }
        //cout << r << " " << mx << " " << cnt << endl;
        if(cnt > 1) cout << "tie\n";
        else cout << index -> second.first << '\n';
        if(t > 0) cout << '\n';
    }

}
