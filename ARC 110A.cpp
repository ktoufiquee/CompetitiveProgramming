#include <bits/stdc++.h>
using namespace std;

long long int lcm(long long int a, long long int b)
{
    return (a / __gcd(a, b) * b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n, ans = 2;
    cin >> n;
    if(n == 2) {
        cout << 3 << "\n";
    }
    else {
        for(int i = 3; i <= n; ++i) {
            ans = lcm(ans, i);
        }
        cout << ans << "\n";
    }
    //cout << 2329089562801 << endl;
}