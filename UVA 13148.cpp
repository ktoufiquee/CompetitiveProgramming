#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    vector<long long int> v = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121};
    long long int n;
    while(cin >> n && n != 0) {
        auto found = find(v.begin(), v.end(), n);
        if(found != v.end()) {
            cout << "Special\n"; 
        }
        else {
            cout << "Ordinary\n";
        }
    }
}