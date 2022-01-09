#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    cin >> t;
    while(t--) {
        long long int n, d, safe = 0, risk = 0;
        cin >> n >> d;
        for(int i = 0; i < n; ++i) {
            int age;
            cin >> age;
            if(age >= 80 || age <= 9) {
                risk++;
            }
            else {
                safe++;
            }
        }
        cout << ceil(risk * 1.0 / d) + ceil(safe * 1.0 / d) << "\n";
    }
}

