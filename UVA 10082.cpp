#include <bits/stdc++.h>
using namespace std;

string a[4];

void initKey()
{
    a[0] = "`1234567890-=";
    a[1] = "QWERTYUIOP[]\\";
    a[2] = "ASDFGHJKL;'";
    a[3] = "ZXCVBNM,./";
}

char findKey(char c)
{
    for(int i = 0; i < 4; ++i) {
        int len = a[i].size();
        for(int j = 0; j < len; ++j) {
            if(a[i][j] == c) {
                return a[i][j - 1];
            }
        }
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    initKey();
    string s;
    while(true) {
        getline(cin, s);
        if(!cin) break;
        for(int i = 0; i < s.size(); ++i) {
            s[i] = findKey(s[i]);
        }
        cout << s << '\n';
    }
}

