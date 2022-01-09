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
        long long int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        bool triangle = arr[0] + arr[1] > arr[2] && arr[0] > 0 && arr[1] - arr[0] < arr[2];
        if(triangle) {
            if(arr[0] == arr[1] && arr[1] == arr[2]) {
                cout << "Case " << tc++ << ": Equilateral\n"; 
            }
            else if(arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[1]) {
                cout << "Case " << tc++ << ": Isosceles\n"; 
            }
            else {
                cout << "Case " << tc++ << ": Scalene\n"; 
            }
        }
        else {
            cout << "Case " << tc++ << ": Invalid\n"; 
        }
    }
}