
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    while(true) {
        int n;
        cin >> n;
        if(!cin) break;
        vector<int> arr(n);
        vector<int> val;
        for(auto &it : arr) cin >> it;
        for(int i = 0; i < n - 1; ++i) {
            val.push_back(abs(arr[i] - arr[i + 1]));
        }
        sort(val.begin(), val.end());
        bool jol = true;
        for(int i = 0; i < val.size(); ++i) {
            if(val[i] != i + 1) {
                jol = false;
                break;
            }
        }
        if(jol) cout << "Jolly\n";
        else cout << "Not jolly\n";
    }
    return 0;
}
