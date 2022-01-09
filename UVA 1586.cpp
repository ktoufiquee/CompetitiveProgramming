#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int kase;
    cin >> kase;
    vector<double> arr(26, 0);
    arr['C' - 'A'] = 12.01;
    arr['H' - 'A'] = 1.008;
    arr['O' - 'A'] = 16.00;
    arr['N' - 'A'] = 14.01;
    while(kase--) {
        string s;
        cin >> s;
        double sum = 0, len = s.length();
        
        for(int i = 0; i < len; ++i) {
            //cout << i << " ";
            if(s[i] >= 'A' && s[i] < 'Z') {
                //cout << "IN" << endl;
                if(i == len - 1) {
                    sum += arr[s[i] - 'A'];
                }
                else if(s[i + 1] >= 'A' && s[i + 1] <= 'Z') {
                    sum += arr[s[i] - 'A'];
                }
                else if(s[i + 1] >= '0' && s[i + 1] <= '9') {
                    double num = s[i + 1] - '0';
                    if(i + 2 < len && s[i + 2] >= '0' && s[i + 2] <= '9') {
                        num = (num * 10) + (s[i + 2] - '0');
                    }
                    sum += (num * arr[s[i] - 'A']);
                }
            }
        }
        cout << fixed << setprecision(3) << sum << '\n';
    }
}