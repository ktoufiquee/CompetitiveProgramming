#include <bits/stdc++.h>
using namespace std;

string to_digit(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size(); ++i) {
        sum += (s[i] - '0');
    }
    return to_string(sum);
}

int to_int(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            sum += (s[i] - 'a' + 1);
        }
        if(s[i] >= 'A' && s[i] <= 'Z') {
            sum += (s[i] - 'A' + 1);
        }
    }
    s = to_string(sum), sum = 0;
    while(s.size() > 1) {
        s = to_digit(s);
    }
    istringstream in(s);
    in >> sum;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    string a, b;
    while(true) {
        getline(cin, a);
        getline(cin, b);
        if(!cin) {
            break;
        }
        int ia = to_int(a), ib = to_int(b);
        double i1 = (ia * 1.0 / ib) * 100.0;
        double i2 = (ib * 1.0 / ia) * 100.0;
        if(i1 > 100) {
            cout << fixed << setprecision(2) << i2 << " %\n";
        }
        else {
            cout << fixed << setprecision(2) << i1 << " %\n";
        }
    }
}