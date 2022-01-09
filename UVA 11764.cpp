#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    long long int t = 1, tc = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        for(int i = 0; i < n; ++i) cin >> arr[i];
        int h = 0, l = 0;
        for(int i = 0; i < n - 1; ++i) {
            if(arr[i] > arr[i + 1]) {
                //cout << i << endl;
                l++;
            }
            if(arr[i] < arr[i + 1]) h++;
        }
        cout << "Case " << tc++ << ": " << h << " " << l << '\n';
    }
}

