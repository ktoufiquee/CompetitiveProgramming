#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, tc = 1;
    cin >> t;
    getchar();
    while(t--) {
        string in, out, og_in, og_out;
        getline(cin, in);
        getline(cin, out);
        og_in = in;
        og_out = out;
        in.erase(remove(in.begin(), in.end(), ' '), in.end());
        out.erase(remove(out.begin(), out.end(), ' '), out.end());
        if(og_in == og_out) {
            cout << "Case " << tc++ << ": Yes\n";
        }
        else if(in == out) {
            cout << "Case " << tc++ << ": Output Format Error\n";
        }
        else {
            cout << "Case " << tc++ << ": Wrong Answer\n";
        }
    }
}