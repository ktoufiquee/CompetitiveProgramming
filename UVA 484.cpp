#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> arr;
    map<int, int> f;
    int n;
    while(cin >> n) arr.push_back(n);
    int len = arr.size();
    for(int i = 0; i < len; ++i) {
        f[arr[i]]++;
    }
    for(int i = 0; i < len; ++i) {
        if(f[arr[i]] != -1) {
            cout << arr[i] << " " << f[arr[i]] << '\n';
            f[arr[i]] = -1;
        }
    }
}
