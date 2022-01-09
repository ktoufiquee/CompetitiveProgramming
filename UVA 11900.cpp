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
        int n, p, q;
        cin >> n >> p >> q;
        vector<int> arr(n, 0);
        for(auto &it : arr) cin >> it;
        sort(arr.begin(), arr.end());
        int w = 0, count = 0;
        for(int i = 0; i < arr.size(); ++i) {
            if(w + arr[i] > q) {
                break;
            }
            w += arr[i];
            count++;
        }
        cout << "Case " << tc++ << ": " << min(count, p) << "\n";
    }
}