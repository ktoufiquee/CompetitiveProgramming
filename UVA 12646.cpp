#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int a, b, c;
    while(cin >> a >> b >> c) {
        if(a == b && b == c) {
            cout << "*\n";
        }
        else if(a == b) {
            cout << "C\n";
        }
        else if(b == c) {
            cout << "A\n";
        }
        else {
            cout << "B\n";
        }
    }
}
