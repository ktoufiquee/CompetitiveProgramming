#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            s += to_string(i + 1);
        }
        int arr[10] = {0};
        int len = s.size();
        for(int i = 0; i < len; ++i) {
            arr[s[i] - '0']++;
        }
        for(int i = 0; i < 10; ++i) {
            cout << arr[i];
            if(i != 9) cout << " ";
        }
        cout << endl;
    }
}
