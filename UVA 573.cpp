#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    while(true) {
        double h, u, d, f;
        cin >> h >> u >> d >> f;
        if(h == 0) break;
        double heightClimbed = 0, fat = u * f / 100.0;
        int day = 0;
        bool success = false;
        while(true) {
            day++;
            heightClimbed += u;
            if(heightClimbed > h) {
                success = true;
                break;
            }
            heightClimbed -= d;
            if(heightClimbed < 0) {
                success = false;
                break;
            }
            u -= fat;
            if(u < 0) u = 0;
        }
        if(success) cout << "success on day " << day << '\n';
        else cout << "failure on day " << day << '\n';
    }
    return 0;
}
