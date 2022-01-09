#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    cin >> t;
    cin >> ws;
    while(t--) {
        string s, odd, even;
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        for(int i = 0; i < s.size(); ++i) {
            if(i % 2 == 0) {
                int c = (s[i] - '0') * 2;
                even += to_string(c);
            }
            else {
                odd += s[i];
            }
        }
        int sodd = 0, seven = 0;
        for(int i = 0; i < odd.size(); ++i) {
            sodd += (odd[i] - '0');
        }
        for(int i = 0; i < even.size(); ++i) {
            seven += (even[i] - '0');
        }
        if((sodd + seven) % 10 == 0) {
            cout << "Valid\n";
        }
        else {
            cout << "Invalid\n";
        }
    }
}