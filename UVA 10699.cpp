#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    while(cin >> n && n != 0) {
        long long int temp = n, cnt = 0;
        for(int i = 2; i * i <= n; ++i) {
            if(n % i == 0) cnt++;
            while(n % i == 0) n /= i;
        }
        if(n > 1) cnt++;
        cout << temp << " : " << cnt << '\n';
    }
}