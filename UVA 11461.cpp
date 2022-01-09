#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(true) {
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) {
            break;
        }
        int count = 0;
        for(int i = a; i <= b; ++i) {
            if(i == (int)sqrt(i) * (int)sqrt(i)) {
                count++;
            }
        }
        cout << count << "\n";
    }
}