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
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for(int i = a; i <= b; ++i) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
        cout << "Case " << tc++ << ": " << sum << "\n";
    }
}