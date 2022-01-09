#include <bits/stdc++.h>
using namespace std;


/*
bool prime[1000001];
void primeInitialize() {
    memset(prime, true, sizeof(prime));
    for(long long int i = 2; i * i <= 1000000; ++i) {
        if(prime[i]) {
            for(long long int j = i * 2; j <= 1000000; j += i) {
                prime[j] = false;
            }
        }
    }
}
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    cin >> t;
    while(t--) {
        int term1, term2, final, att, ct[3];
        cin >> term1 >> term2 >> final >> att >> ct[0] >> ct[1] >> ct[2];
        sort(ct, ct + 3);
        int total = term1 + term2 + final + att + (ct[1] + ct[2]) / 2;
        char c;
        if(total >= 90) {
            c = 'A';
        }
        else if(total >= 80) {
            c = 'B';
        }
        else if(total >= 70) {
            c = 'C';
        }
        else if(total >= 60) {
            c = 'D';
        }
        else {
            c = 'F';
        }
        cout << "Case " << tc++ << ": " << c << "\n";
    }
}