#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        int h, m;
        char c;
        cin >> h >> c >> m;
        int deg = (h * 60) + m;
        if(deg > 720) {
            deg = deg % 720;
        }
        int flipped_deg;
        if(deg == 720 || deg == 360) {
            flipped_deg = deg;
        }
        else if(deg >= 0 && deg <= 180) {
            flipped_deg = 720 - deg;
        }
        else if(deg > 180 && deg < 360) {
            flipped_deg = 540 - (deg - 180);
        }
        else if(deg > 360 && deg <= 540) {
            flipped_deg = 360 - (deg - 360);
        }
        else {
            flipped_deg = 0 + (720 - deg);
        }
        int fh = flipped_deg / 60, fm = (m == 0) ? 0 : 60 - m;
        if(fh == 0) {
            fh = 12;
        }
        cout << setw(2) << setfill('0')  << fh << c << setw(2) << setfill('0')  << fm << "\n";
    }
}