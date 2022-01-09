#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;
        map<int, int> cd;
        map<int, int>:: iterator it;
        long long int a, cnt = 0;
        while(n--) {
            cin >> a;
            cd[a]++;
        }
        while(m--) {
            cin >> a;
            cd[a]++;
        }
        for(it = cd.begin(); it != cd.end(); ++it) {
            if((it -> second) > 1) cnt++;
        }
        cout << cnt << '\n';
    }
}
