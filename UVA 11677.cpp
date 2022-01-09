#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    int h1, m1, h2, m2;
    while(true) {
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }
        if(h1 > h2 || (h1 == h2 && m1 > m2)) {
            h2 += 24;
        }
        int min = ((h2 - h1) * 60) + (m2 - m1);
        cout << min << '\n';
    }
}