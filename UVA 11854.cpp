#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(true) {
        unsigned long long int a, b, c;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        if(a * a + b * b == c * c) {
            cout << "right\n";
        }
        else if(c * c + b * b == a * a) {
            cout << "right\n";
        }
        else if(a * a + c * c == b * b) {
            cout << "right\n";
        }
        else {
            cout << "wrong\n";
        }
    }
}