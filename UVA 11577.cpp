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
        string s;
        cin >> ws;
        getline(cin, s);
        vector<int> arr(26, 0);
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                arr[s[i] - 'A']++;
            }
            if(s[i] >= 'a' && s[i] <= 'z') {
                arr[s[i] - 'a']++;
            }
        }
        int freq = *max_element(arr.begin(), arr.end());
        for(int i = 0; i < 26; i++) {
            if(arr[i] == freq) {
                cout << (char)('a' + i);
            }
        }
        cout << "\n";

    }
}