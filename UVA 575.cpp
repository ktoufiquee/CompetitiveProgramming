#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    while(cin >> s && s != "0") {
        reverse(s.begin(), s.end());
        int len = s.size();
        unsigned long long int dec = 0;
        for(int i = 0; i < len; ++i) {
            dec += (s[i] - '0') * (pow(2, i + 1) - 1);
        }
        cout << dec << '\n';
    }
}