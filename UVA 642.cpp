#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string stop = "XXXXXX";
    string s;
    map<string, vector<string> > d;
    while(cin >> s) {
        if(s == stop) break;
        string in = s;
        sort(s.begin(), s.end());
        d[s].push_back(in);
    }
    while(cin >> s) {
        if(s == stop) break;
        sort(s.begin(), s.end());
        if(d[s].size() == 0) {
            cout << "NOT A VALID WORD\n";
        }
        else {
            sort(d[s].begin(), d[s].end());
            for(int i = 0; i < d[s].size(); ++i) cout << d[s][i] << '\n';
        }
        cout << "******\n";
    }
}
