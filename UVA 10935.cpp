#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    while (cin >> n && n != 0)
    {
        list<int> l;
        for(int i = 1; i < n + 1; ++i) l.push_front(i);
        cout << "Discarded cards:";
        for(int i = 0; i < n - 1; ++i) {
            cout << ' ' << l.back();
            l.pop_back();
            l.push_front(l.back());
            l.pop_back();
            if(i != n - 2) cout << ",";
        }
        cout << "\nRemaining card: " << l.back() << '\n';
        l.pop_back();
    }
}
