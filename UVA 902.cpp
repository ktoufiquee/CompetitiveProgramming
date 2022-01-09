#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string s;
    while(cin >> n >> s) {
        map<string, int> pass;
        int len = s.size();
        int mx = -100;
        for(int i = 0; i + n - 1 < len; ++i) {
            pass[s.substr(i, n)]++;
        }
        map<string, int>::iterator it;
        for(it = pass.begin(); it != pass.end(); ++it) {
            mx = max(it -> second, mx);
        }
        for(it = pass.begin(); it != pass.end(); ++it) {
            if(it -> second == mx) {
                cout << it -> first << endl;
                break;
            }
        }
    }
}