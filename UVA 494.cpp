#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true) {
        int cnt = 0;
        string s;
        getline(cin, s);
        if(!cin) break;
        bool end = true;
        for(int i = 0; i < s.size(); ++i) {
            if(end) {
                if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                    end = false;
                    cnt++;
                }
            }
            if(!end) {
                if(!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))) {
                    end = true;
                }
            }
        }
        cout << cnt << '\n';
    }
}
