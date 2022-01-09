#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int t = 1, tc = 1;
    //cin >> t >> ws;
    
    while(true) {
        string s;
        getline(cin, s);
        if(!cin) {
            break;
        }
        cin >> ws;
        vector<string> arr;
        istringstream s_arr(s);
        string in;
        while(s_arr >> in) arr.push_back(in);
        for(int i = 0; i < arr.size(); ++i) {
            reverse(arr[i].begin(), arr[i].end());
        }
        for(int i = 0; i + 1 < arr.size(); ++i) {
            cout << arr[i] << " ";
        }
        cout << arr[arr.size() - 1] << "\n";
    }
}

