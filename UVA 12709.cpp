#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<double, int> &a, pair<double,int> &b)
{
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    while(cin >> n && n != 0) {
        long long int a, b, c;
        vector<pair<double, int> > ratio;
        while(n--) {
            cin >> a >> b >> c;
            ratio.push_back(make_pair(-1 * c, a * b * c));
        }
        sort(ratio.begin(), ratio.end(), comparator);
        cout << ratio[0].second << endl;
    }
}