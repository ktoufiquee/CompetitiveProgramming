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
        for(auto &it : arr) cin >> it;
        int m, a, b, diff = 1000001;
        cin >> m;
        for(int i = 0; i < n - 1; ++i) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] + arr[j] == m) {
                    if(abs(arr[i] - arr[j]) < diff) {
                        a = arr[i];
                        b = arr[j];
                        diff = abs(arr[i] - arr[j]);
                    }
                }
            }
        }
        if(a > b) swap(a, b);
        cout << "Peter should buy books whose prices are " << a << " and " << b << ".\n\n";
    }
}
