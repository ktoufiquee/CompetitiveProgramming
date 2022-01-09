#include <bits/stdc++.h>
using namespace std;

int arr[5];
int cnt;

bool arithmatics(int total, int pos)
{
    if(pos > 4) return total == 23;
    return arithmatics(total + arr[pos], pos + 1) || arithmatics(total * arr[pos], pos + 1) || arithmatics(total - arr[pos], pos + 1); 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(true) {
        bool neg = true, ans = false;
        for(int i = 0; i < 5; ++i) {
            cin >> arr[i];
            if(arr[i] != 0) neg = false;
        }
        if(neg) break;
        sort(arr, arr + 5);
        do {
            ans = arithmatics(arr[0], 1);
            if(ans == true) break;
        } while(next_permutation(arr, arr + 5));
        if(ans) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}
