#include <bits/stdc++.h>
using namespace std;

int arr[101];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    string s;
    cin >> t;
    cin >> ws;
    while(t--) {
        int len = 0;
        getline(cin, s);
        istringstream input(s);
        while(input >> arr[len]) ++len;
        int maxGCD = -100;
        for(int i = 0; i < len; ++i) {
            for(int j = i + 1; j < len; ++j) {
                maxGCD = max(maxGCD, __gcd(arr[i], arr[j]));
            }
        }
        cout << maxGCD << "\n";
    }
}