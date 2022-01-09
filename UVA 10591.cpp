#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a;
        b = a;
        long long int ss;;
        do {
            ss = 0;
            for(int i = 0; i < a.size(); ++i) {
                ss += (a[i] - '0') * (a[i] - '0');
            }
            a = to_string(ss);
        } while(a.size() > 1);
        if(a == "1") {
            cout << "Case #" << tc++ << ": " << b << " is a Happy number.\n";
        }
        else {
            cout << "Case #" << tc++ << ": " << b << " is an Unhappy number.\n";
        }
    }
}