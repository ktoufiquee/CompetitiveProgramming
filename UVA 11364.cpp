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
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for(auto &it : arr) cin >> it;
        sort(arr.begin(), arr.end());
        int sum = 0;
        for(int i = 0; i + 1 < arr.size(); ++i) {
            sum += arr[i + 1] - arr[i];
        }
        cout << 2 * sum << "\n";
    }