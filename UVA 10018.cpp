#include <bits/stdc++.h>
using namespace std;

string reverseString(string a) {
    reverse(a.begin(), a.end());
    return a;
}

long long int to_int(string s)
{
    istringstream in(s);
    long long int sum;
    in >> sum;
    return sum;
}

bool isPalindrome(string a)
{
    if(a == reverseString(a)) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        long long int sum = to_int(s) + to_int(reverseString(s));
        int it = 1;
        string a = to_string(sum);
        while(!isPalindrome(a)) {
            sum = to_int(a) + to_int(reverseString(a));
            a = to_string(sum);
            it++;
        }
        cout << it << " " << a << "\n";
    }
}