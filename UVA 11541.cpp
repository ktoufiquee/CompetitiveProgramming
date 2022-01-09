#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        istringstream in(a);
        char c;
        int n;
        cout << "Case " << tc++ << ": ";
        while(in >> c >> n) {
            for(int i = 0; i < n; ++i) {
                cout << c;
            }
        }
        cout << '\n';
    }
}
