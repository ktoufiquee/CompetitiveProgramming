#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int kase;
    cin >> kase; 
    cin >> ws >> ws;
    while(kase--) {
        string s;
        map<string, int> t;
        int cnt = 0;
        while (getline(cin, s) && s != "")
        {
            t[s]++;
            cnt++;
        }
        for(auto it : t) {
            double p = (it.second * 100.00) / cnt;
            cout << it.first << " " << fixed << setprecision(4) << p << '\n';
        }
		if(kase > 0) cout << '\n';
    }
}
