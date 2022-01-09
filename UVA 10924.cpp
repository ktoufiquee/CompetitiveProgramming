#include <bits/stdc++.h>
using namespace std;

bool primeCheck(long long int n) {
    for(long long int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int t, tc = 1;
    //cin >> t;
    string s;
    while(cin >> s) {
        long long int sum = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                sum += (s[i] - 'a' + 1);
            }
            else {
                sum += (s[i] - 'A' + 27);
            }
        }
        if(primeCheck(sum)) {
            cout << "It is a prime word.\n";
        }
        else {
            cout << "It is not a prime word.\n";
        }
    }
}