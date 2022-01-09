#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, r, val;
    cin >> n >> r;
    map<string, int> v;
    string s;
    while(n--) {
        cin >> s >> val;
        v[s] = val;
    }
    string stop = ".";
    while(r--) {
        long long int sum = 0;
        while(cin >> s && s != stop) {
            sum += v[s];
        }
        cout << sum << '\n';
    }
}
