#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin >> n && n != 0) {
        map<vector<int>, int> pop;
        while(n--) {
            vector<int> arr(5);
            for(auto &it : arr) cin >> it;
            sort(arr.begin(), arr.end());
            pop[arr]++;
        }
        int cnt = 0, mx = 0;
        map<vector<int>, int>:: iterator it;
        for(it = pop.begin(); it != pop.end(); ++it) {
            mx = max(mx, it -> second);
        }
        for(it = pop.begin(); it != pop.end(); ++it) {
            if(it -> second == mx) cnt += mx;
        }
        cout << cnt << '\n';
    }
}
