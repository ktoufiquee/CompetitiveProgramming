#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    //cin >> t;
    while(true) {
        int n;
        cin >> n;
        double u, v, s, t, a;
        if(n == 1) {
            cin >> u >> v >> t;
            a = (v - u) / t;
            s = (u * t) + (0.5 * a * t * t);
            cout << fixed << setprecision(3) << "Case " << tc++ << ": " << s << " " << a << '\n';
        }
        if(n == 2) {
            cin >> u >> v >> a;
            t = (v - u) / a;
            s = (u * t) + (0.5 * a * t * t);
            cout << fixed << setprecision(3) << "Case " << tc++ << ": " << s << " " << t << '\n';
        }
        if(n == 3) {
            cin >> u >> a >> s;
            v = sqrt(u * u + 2 * a * s);
            t = (v - u) / a;
            cout << fixed << setprecision(3) << "Case " << tc++ << ": " << v << " " << t << '\n';
        }
        if(n == 4) {
            cin >> v >> a >> s;
            u = sqrt(v * v - 2 * a * s);
            t = (v - u) / a;
            cout << fixed << setprecision(3) << "Case " << tc++ << ": " << u << " " << t << '\n';
        }
        if(n == 0) {
            break;
        }
    }
}

/*
1 10 5 2.0
1 5 10.0 2
2 10 11 2
3 5 1 6
4 5.0 -1 6
0
*/