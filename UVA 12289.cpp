#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int tc = 0; tc < t; ++tc) {
        string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        string s;
        cin >> s;
        int index = -1;
        int len = s.size();
        for(int i = 0; i < 10; ++i) {
            if(s.size() == arr[i].size()) {
                int f = 0;
                for(int j = 0; j < s.size(); j++) {
                    if(s[j] != arr[i][j]) f++;
                    if(f > 1) break;
                }
                if(f <= 1) {
                    index = i;
                    break;
                }
            }
            if(index != -1) break;
        }
        cout << index << '\n';
    }
}
