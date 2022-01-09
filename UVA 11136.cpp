#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    long long int n;
    while(cin >> n && n != 0) {
        long long int ans = 0;
        multiset<int> arr;
        multiset<int>::iterator high, low;
        while(n--) {
            long long int k, in;
            cin >> k;
            while(k--) {
                cin >> in;
                arr.insert(in);
            }
            high = --arr.end();
            low = arr.begin();
            ans += (*high - *low);
            arr.erase(high);
            arr.erase(low);
        }
        cout << ans << '\n';
    }
}
