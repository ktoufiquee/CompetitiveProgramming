#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool ps = false;
        for(auto &it : arr) {
            int sq = sqrt(it);
            //cout << sq * sq << " " << it << '\n';
            if(sq * sq != it) {
                ps = true;
                break;
            }
        }
        if(ps) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}