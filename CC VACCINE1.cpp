#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(t--) {
        int d1, v1, d2, v2, p;
        cin >> d1 >> v1 >> d2 >> v2 >> p;
        bool start1 = false;
        bool start2 = false;
        int d = max(d1, d2), day = 0, vac = 0;
        if(d1 == 1 && d2 == 1) {
            cout << ceil(p * 1.0 / (v1 + v2)) << "\n";
        }
        else {
            for(int i = 1; ; ++i) {
                if(i == d1) {
                    start1 = true;
                }
                if(i == d2) {
                    start2 = true;
                }
                if(vac >= p) {
                    break;
                }
                else {
                    if(start1) {
                        vac += v1;
                    }
                    if(start2) {
                        vac += v2;
                    }
                    day++;
                }
                //cout << vac << " " << day << endl;
            }
            cout << day << "\n";
        }
        
    }
}

