#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    while(cin >> s && s != "0") {
        long long int d = 0;
        for(int i = 0; i < s.size(); ++i) {
            d = (d * 10) + (s[i] - '0');
            d = d % 11;
        }
        if(d == 0) {
            cout << s << " is a multiple of 11.\n";
        }
        else {
            cout << s << " is not a multiple of 11.\n";
        }
    }
}