#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n, k;
    while(t--) {
        cin >> n >> k;
        int neg = (n - k);
        if(neg > k) {
            for(int i = 1; i <= n; ++i) {
                if(i % 2 == 0 && k-- > 0) {
                    cout << i << " ";
                }
                else {
                    cout << -1 * i << " ";
                }
            }
            cout << '\n';
        }
        else {
            for(int i = 1; i <= n; ++i) {
                if(i % 2 != 0 && neg-- > 0) {
                    cout << -1 * i << " ";
                }
                else {
                    cout << i << " ";
                }
            }
            cout << '\n';
        }
    }
}