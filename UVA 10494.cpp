#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tc = 1;
    string a;
    unsigned long long int b; ;
    char c;
    while(cin >> a >> c >> b) {
        int len = a.length();
        unsigned long long int carry = 0, num = 0;
        string div;;
        for(int i = 0; i < len; ++i) {
            num = (num * 10) + (a[i] - '0');
            carry = num % b;
            num = num / b;
            if(num > 0) {
                div += to_string(num);
            }
            else {
                if(!div.empty()) {
                    div += to_string(num);
                }
            }
            num = carry;
        }
        if(c == '/') {
            if(div.empty()) {
                cout << 0 << '\n';    
            }
            else {
                cout << div << '\n';
            }
        }
        else {
            cout << num << '\n';
        }
    }
}


//https://ideone.com/aTcs2K