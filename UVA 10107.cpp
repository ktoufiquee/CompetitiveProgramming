#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    vector<int> arr;
    int n;
    while(cin >> n) {
        arr.push_back(n);
        sort(arr.begin(), arr.end());
        int len = arr.size();
        if(len == 1) {
            cout << arr[0] << '\n';
        }
        else if(len % 2 == 0) {
            int mid1, mid2;
            mid1 = (len / 2) - 1;
            mid2 = (len / 2);
            cout << (arr[mid1] + arr[mid2]) / 2 << '\n';
        }
        else {
            cout << arr[len / 2] << '\n';
        }
    }
}
