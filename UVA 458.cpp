#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, tc = 1;
    //cin >> t;
    string s;
    while(cin >> s) {
        for(int i = 0; i < s.size(); ++i) {
            s[i] -= 7;
        }
        cout << s << endl;
    }
}