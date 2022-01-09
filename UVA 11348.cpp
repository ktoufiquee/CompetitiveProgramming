#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 0;
    cin >> t;
    while(t--) {
        int n, in;
        cin >> n;
        int arr[n] = {0};
        vector<int> v[n];
        map<int, int> u;
        for(int i = 0; i < n; ++i) {
            cin >> in;
            set<int> uc;
            for(int j = 0; j < in; ++j) {
                int vin;
                cin >> vin;
                uc.insert(vin);
            }
            for(auto it = uc.begin(); it != uc.end(); ++it) {
                v[i].push_back(*it);
            }
        }
        for(int i = 0; i < n; ++i) {
            int len = v[i].size();
            for(int j = 0; j < len; ++j) {
                u[v[i][j]]++;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; ++i) {
            int len = v[i].size();
            for(int j = 0; j < len; ++j) {
                if(u[v[i][j]] < 2) {
                    arr[i]++;
                    cnt++;
                }
            }
        }
        cout << "Case " << ++tc << ": ";
        for(int i = 0; i < n; ++i) {
            cout << fixed << setprecision(6) << arr[i] * 100.0 / cnt << "%";
            if(i != n - 1) cout << " ";
        }
        cout << '\n';
    }
}