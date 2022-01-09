#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int e, f, c;
        cin >> e >> f >> c;
        int empty = e + f, carry = 0, total = 0, curr = 0;
        while(empty >= c) {
            carry = empty % c;
            curr = empty / c;
            total += curr;
            empty = curr + carry;
        } 
        cout << total << '\n';
    }
}