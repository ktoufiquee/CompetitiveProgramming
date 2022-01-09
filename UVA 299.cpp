#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int temp = 0, s = 0;
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    temp = arr[j], arr[j] = arr[j + 1], arr[j + 1] = temp;
                    s++;
                }
            }
        }
        cout << "Optimal train swapping takes " << s << " swaps.\n";
    }
}

