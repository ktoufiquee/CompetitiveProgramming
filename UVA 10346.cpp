#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    int n, k;
    while(cin >> n >> k) {
        int carry = 0, total = n, next = 0;
        while(n >= k) {
            carry = n % k;
            next = n / k;
            total += next;
            n = next + carry;
        }
        cout << total << '\n';
    }
}