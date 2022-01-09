#include <bits/stdc++.h>
using namespace std;

bool isBig(string a, string b)
{
    auto len = a.size() > b.size()? b.size() : a.size();
    for(int i = 0; i < len; ++i) {
        if(a[i] == '.' && b[i] != '.') {
            return false;
        }
        if(b[i] == '.' && a[i] != '.') {
            return true;
        }
        if(a[i] > b[i]) return true;
        if(b[i] > a[i]) return false;
    }
    if(a.size() > b.size()) return true;
    return false;
}

bool isSmall(string a, string b)
{
    auto len = a.size() > b.size()? b.size() : a.size();
    for(int i = 0; i < len; ++i) {
        if(a[i] == '.' && b[i] != '.') {
            return true;
        }
        if(b[i] == '.' && a[i] != '.') {
            return false;
        }
        if(a[i] > b[i]) return false;
        if(b[i] > a[i]) return true;
    }
    if(a.size() > b.size()) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long int n, m;
    int a, b;
    char point;
    cin >> n >> m;
    map<string, long double> g;
    string s;
    while(n--) {
        cin >> s >> a >> point >> b;
        g[s] = (a * 10 + b);
    }
    long long int tc = 0;
    while(m--) {
        bool guess = false;
        string c;
        long long int sum = 0, x;
        string comp;
        while(true) {
            cin >> s >> c;
            sum += g[s];
            if(c != "+") break;
        }
        cin >> x;
        x *= 10;
        if(c.compare(">") == 0) {
            if(sum > x) guess = true;
        }
        if(c.compare(">=") == 0) {
            if(sum >= x) guess = true;
        }
        if(c.compare("<=") == 0) {
            if(sum <= x) guess = true;
        }
        if(c.compare("<") == 0) {
            if(sum < x) guess = true;
        }
        if(c.compare("=") == 0) {
            if(sum == x) guess = true;
        }
        if(guess == false) {
            cout << "Guess #" << ++tc << " was incorrect.\n";
        }
        else {
            cout << "Guess #" << ++tc << " was correct.\n";
        }
    }
}
