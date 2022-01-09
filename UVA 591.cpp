#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, tc = 1;
    while(cin >> n && n != 0) {
        cout << "Set #" << tc++ << '\n'; 
        vector<int> arr(n);
        int sum = 0;
        for(auto &it : arr) {
            cin >> it;
            sum += it;
        }
        int avg = sum / n;
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            if(arr[i] > avg) {
                ans += (arr[i] - avg);
            }
        }
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }
}
