#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, tc = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        double sum = 0, avg = 0;
        for(auto &it : arr) {
            cin >> it;
            sum += it;
        }
        avg = sum * 1.0 / n;
        int cnt = 0;
        for(int i = 0; i < arr.size(); ++i) {
            if(arr[i] > avg) {
                cnt++;
            }
        }
        cout << fixed << setprecision(3) << (cnt * 1.0 / n) * 100.0 << "%\n";
    }
}