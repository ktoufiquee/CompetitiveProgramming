#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    while(true) {
        long long int n;
        cin >> n;
        if(n == 0) break;
        bitset<32> binary(n);
        string a, s = binary.to_string();
        int cnt = 0;
        bool start = false;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '0' && start) a += s[i];
            if(s[i] == '1') start = true, a += s[i], cnt++;
        }
        cout << "The parity of " << a << " is " << cnt << " (mod 2).\n";
    }
}
