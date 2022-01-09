#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int kase = 0; kase < t; kase++) {
        int l, h;
        cin >> l >> h;
        for(int height = 0; height < h; height++) {
            int print = 1;
            bool peak = false;
            for(int length = 1; length <= 2 * l - 1; length++) {
                for(int k = 0; k < print; k++) {
                    cout << print;
                }
                if(print >= l) peak = true;
                if(peak) print--;
                else print++;
                cout << '\n';
            }
            if(height != h - 1) cout << '\n';
        }
        if(kase != t - 1) cout << '\n';
    }
}
