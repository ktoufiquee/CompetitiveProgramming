#include <bits/stdc++.h>
using namespace std;

int cnt;

bool findt(vector<vector<int> > &vr, int index, int n)
{
    if(index + 1>= vr.size()) {
        return true;
    }
    vector<int>::iterator f;
    f = find(vr[index + 1].begin(), vr[index + 1].end(), n);
    if(f == vr[index + 1].end()) {
        return false; 
    }
    else {
        int c = f - (vr[index + 1].begin());
        cnt += c;
        return findt(vr, index + 1 + c, n);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(auto &it : arr) cin >> it;
        vector<vector<int> > vr;
        for(int i = 0; i < n; ++i) {
            int sum = 0;
            vector<int> vs;
            for(int j = i; j < n; ++j) {
                sum += arr[j];
                vs.push_back(sum);
            }
            vr.push_back(vs);
        }
        bool found = false;
        for(int i = 0; i < vr[0].size(); ++i) {
            cnt = i;
            found = findt(vr, i, vr[0][i]);
            if(found) break;
        }
        if(found) cout << cnt << '\n';
        else cout << n - 1 << '\n';
    }
}
