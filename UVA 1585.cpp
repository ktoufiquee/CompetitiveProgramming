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
        string s;
        cin >> s;
        int score = 0, streak = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == 'O') {
                ++streak;
                score += streak;
            }
            else {
                streak = 0;
            }
        }
        cout << score << "\n";
    }
}

/*
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
*/