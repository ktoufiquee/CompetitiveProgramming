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
        long long int a, b;
        cin >> a >> b;
        if(a < b) {
            cout << "<\n"; 
        }
        if(a > b) {
            cout << ">\n";
        }
        if(a == b) {
            cout << "=\n"; 
        }
    }
}