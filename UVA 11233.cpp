#include <bits/stdc++.h>
using namespace std;

bool vowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(t--) {
        int l, n;
        cin >> l >> n;
        pair<string, string> p[l + 1];
        for(int i = 0; i < l; ++i) cin >> p[i].first >> p[i].second;
        string s;
        while(n--) {
            cin >> s;
            int index = -1;
            for(int i = 0; i < l; ++i) {
                if(s == p[i].first) {
                    index = i;
                    break;
                }
            }
            int last = s.size() - 1;
            if(index != -1) {
                cout << p[index].second << "\n";
            }
            else if(!vowel(s[last - 1]) && s[last] == 'y') {
                for(int i = 0; i < last; ++i) {
                    cout << s[i];
                }
                cout << "ies\n";
            }
            else if(s[last] == 'o' || s[last] == 's' || s[last] == 'x' || (s[last] == 'h' && (s[last - 1] == 'c' || s[last - 1] == 's'))) {
                cout << s << "es\n";
            }
            else {
                cout << s << "s\n";
            }
        }
    }
}

