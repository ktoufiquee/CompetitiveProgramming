#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    while(true) {
        unsigned int a, b, cnt = 0, sum = 0;
        bool carry = false;
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        while(true) {
            sum = a % 10 + b % 10;
            if(carry) {
                sum++;
            }
            if(sum > 9) {
                carry = true;
                cnt++;
            }
            else {
                carry = false;
            }
            a /= 10, b /= 10;
            if(a == 0 && b == 0) break;
        }
        if(cnt == 0) {
            cout << "No carry operation.\n";
        }
        else if(cnt == 1) {
            cout << cnt << " carry operation.\n";
        }
        else {
            cout << cnt << " carry operations.\n";
        }
    }
}