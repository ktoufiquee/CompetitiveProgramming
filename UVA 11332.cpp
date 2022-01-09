#include <bits/stdc++.h>
using namespace std;

string count_digit(string s)
{
    long long int sum = 0;
    for(int i = 0; i < s.size(); ++i) {
        sum += (s[i] - '0');
    }
    stringstream input;
    input << sum;
    string c;
    input >> c;
    return c;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    while(true) {
        string s;
        cin >> s;
        if(s == "0") {
            break;
        }
        while(s.size() != 1) {
            s = count_digit(s);
        }
        cout << s << "\n";
    }
}