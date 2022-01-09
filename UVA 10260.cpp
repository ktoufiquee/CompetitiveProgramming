#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    string s;
    while(cin >> s) {
        vector<char> str;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V') {
                s[i] = '1';
            }
            if(s[i] == 'C' || s[i] == 'J' || s[i] == 'G' || s[i] == 'K' || s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z') {
                s[i] = '2';
            }
            if(s[i] == 'D' || s[i] == 'T') {
                s[i] = '3';
            }
            if(s[i] == 'L') {
                s[i] = '4';
            }
            if(s[i] == 'M' || s[i] == 'N') {
                s[i] = '5';
            }
            if(s[i] == 'R') {
                s[i] = '6';
            }
        }
        str.push_back(s[0]);
        for(int i = 1; i < s.size(); i++) {
            if(s[i] != s[i - 1]) {
                str.push_back(s[i]);
            }
        }
        for(int i = 0; i < str.size(); ++i) {
            if(str[i] >= '1' && str[i] <= '6') {
                cout << str[i];
            }
        }
        cout << "\n";
    }
}