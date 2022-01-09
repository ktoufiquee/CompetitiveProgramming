#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(true) {
        int n, q;
        cin >> n >> q;
        if(n == 0 && q == 0) {
            break;
        }
        vector<int> arr(n);
        for(auto &it : arr) cin >> it;
        sort(arr.begin(), arr.end());
        cout << "CASE# " << tc++ << ":\n"; 
        while(q--) {
            int x, y = -1;
            cin >> x;
            for(int i = 0; i < arr.size(); ++i) {
                if(arr[i] == x) {
                    y = i + 1;
                    break;
                }
            }
            if(y != -1) {
                cout << x << " found at " << y << "\n";
            }
            else {
                cout << x << " not found\n";
            }
        }
    }
}

/*
4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0
*/