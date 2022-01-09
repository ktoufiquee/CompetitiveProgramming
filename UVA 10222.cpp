#include <bits/stdc++.h>
using namespace std;

string a[3];

void initKey()
{
    a[0] = "qwertyuiop[]\\";
    a[1] = "asdfghjkl;'";
    a[2] = "zxcvbnm,./";
}

char findKey(char c)
{
    if(c >= 'A' && c <= 'Z') {
        c += 32;
    }
    for(int i = 0; i < 3; ++i) {
        int len = a[i].size();
        for(int j = 0; j < len; ++j) {
            if(a[i][j] == c) {
                return a[i][j - 2];
            }
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    initKey();
    string s, b;
    getline(cin , s);
    for(int i = 0; i < s.size(); ++i) {
        b += findKey(s[i]);
    }
    cout << b << '\n';
}
