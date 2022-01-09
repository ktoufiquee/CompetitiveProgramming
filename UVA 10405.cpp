#include <bits/stdc++.h>
using namespace std;

string a, b;
map<pair<int, int>, int> arr_lcs, empty;
int recursive_LCS(int len1, int len2)
{
    if(len1 == 0 || len2 == 0) {
        return 0;
    }
    auto it = arr_lcs.find(make_pair(len1, len2));
    if(it != arr_lcs.end()) {
        return arr_lcs[{len1, len2}];
    }
    if(a[len1 - 1] == b[len2 - 1]) {
        return arr_lcs[{len1, len2}] = 1 + recursive_LCS(len1 - 1, len2 - 1);
    }
    else {
        return arr_lcs[{len1, len2}] = max(recursive_LCS(len1 - 1, len2), recursive_LCS(len1, len2 - 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    string t1, t2;
    while(true) {
        getline(cin, t1);
        getline(cin, t2);
        if(!cin) break;
        a = t1;
        b = t2;
        cout << recursive_LCS(a.length(), b.length()) << '\n';
        arr_lcs = empty;
    }
}