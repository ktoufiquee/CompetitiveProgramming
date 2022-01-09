#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        if(b > a || (a - b) % 2 != 0) {
            cout << "impossible\n";
            continue;
        }
        int y = (a - b) / 2;
        int x = a - y;
        cout << x << " " << y << '\n';
    }
    
    
}
