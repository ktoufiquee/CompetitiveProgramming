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
        int d1, m1, y1, d2, m2, y2, d, m, y;
        char c;
        int stat = 0, age = 0;
        cin >> d1 >> c >> m1 >> c >> y1;
        cin >> d2 >> c >> m2 >> c >> y2;
        y = y1 -y2;
        m = m1 - m2;
        d = d1 - d2;
        if(y == 0 && m == 0 && d == 0) {
            cout << "Case #" << tc++ << ": 0\n";
        }
        else if(y < 0) {
            cout << "Case #" << tc++ << ": Invalid birth date\n";
        }
        else if(y == 0 && m < 0) {
            cout << "Case #" << tc++ << ": Invalid birth date\n";
        }
        else if(y == 0 && m == 0 && d < 0) {
            cout << "Case #" << tc++ << ": Invalid birth date\n";
        }
        else {
            if(y > 0) {
                if(m < 0) {
                    y--;
                }
                else if(m == 0 && d < 0) {
                    y--;
                }
            }
            if(y > 130) {
                cout << "Case #" << tc++ << ": Check birth date\n";
            }
            else {
                cout << "Case #" << tc++ << ": " << y << "\n";
            }
        }
    }
}

