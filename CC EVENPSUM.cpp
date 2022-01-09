#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    cin >> t;
    while(t--) {
        long long int a, b;
        cin >> a >> b;
        long long int a_even = a / 2, a_odd = a - a_even, b_even = b / 2, b_odd = b - b_even;
        cout << a_odd * b_odd + a_even * b_even << "\n";
    }
}

