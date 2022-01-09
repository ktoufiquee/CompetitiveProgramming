#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, tc = 1;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        int len_a = a.length(), len_b = b.length();
        if(len_a != len_b) {
            cout <<"No" << endl;
        }
        else {
            bool ans = true;
            for(int i = 0; i < len_a; ++i) {
                if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
                    a[i] = ' ';
                }
                if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u') {
                    b[i] = ' ';
                }
            }
            for(int i = 0; i < len_a; ++i) {
                if(a[i] != b[i]) {
                    ans = false;
                    break;
                }
            }
            if(ans) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
}