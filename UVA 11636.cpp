#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int>::iterator pos;
    vector<int> arr(15);
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= 15; ++i) {
        arr[i] = arr[i - 1] * 2;
    }
    int t, tc = 1;
    //cin >> t;
    while(true) {
        int n;
        cin >> n;
        if(n < 0) {
            break;
        }
        pos = find(arr.begin(), arr.end(), n);
        if(pos == arr.end())
            pos = upper_bound(arr.begin(), arr.end(), n);
        cout << "Case " << tc++ << ": " << (pos - arr.begin() - 1) << "\n";  
    }
}

/*
1 10 5 2.0
1 5 10.0 2
2 10 11 2
3 5 1 6
4 5.0 -1 6
0
*/