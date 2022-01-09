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
        int n;
        cin >> n;
        if(n == 0) break;
        string s;
        cin >> s;
        int len = s.length(), inc = len / n;
        //cout << inc << '\n';
        for(int i = 0; i < len; i += inc) {
            reverse(s.begin() + i, s.begin() + i + inc);
        }
        cout << s << '\n';
    }
}

/*
3 ABCEHSHSH
5 FA0ETASINAHGRI0NATWON0QA0NARI0
0
*/