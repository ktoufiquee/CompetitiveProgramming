#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int in;
        vector<int> even, odd, all;
        for(int i = 0; i < n; ++i) {
            cin >> in;
            if(in % 2 == 0) {
                even.push_back(in);
            } 
            else {
                odd.push_back(in);
            }
        }
        //sort(even.begin(), even.end());
        //sort(odd.begin(), odd.end());
        for(int i = 0; i < even.size(); ++i) {
            all.push_back(even[i]);
        }
        for(int i = 0; i < odd.size() ; ++i) {
            all.push_back(odd[i]);
        }
        for(auto &it : all) {
            cout << it << ' ';
        }
        cout << '\n';
    }
}