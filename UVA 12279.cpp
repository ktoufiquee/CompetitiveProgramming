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
        int n, c0 = 0, c1 = 0;
        cin >> n;
        if(n == 0) {
            break;
        }
        vector<int> arr(n, 0);
        for(auto &it : arr) cin >> it;
        for(int i = 0; i < arr.size(); ++i) {
            if(arr[i] == 0) {
                c0++;
            }
            else {
                c1++;
            }
        }
        cout << "Case " << tc++ << ": " << c1 - c0 << "\n";
    }
}

/*
11 9 2 3
7 8 3 2
10 15 3 7
8 9 3 2
0 0 0 0
*/