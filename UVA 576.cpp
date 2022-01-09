#include <bits/stdc++.h>
using namespace std;

bool check(char s)
{
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y') return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    string end = "e/o/i";
    while(getline(cin, s) && s != end) {        
        int arr[3] = {0};
        int index = 0;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '/') index++;
            if(check(s[i])) {
                arr[index]++;
                while(true) {
                    i++;
                    if(!(i < s.size())) {
                        break;
                    }
                    if(check(s[i]) == false) {
                        i--;
                        break;
                    }
                }
            }
        }
        if(arr[0] != 5) cout << 1 << '\n';
        else if(arr[1] != 7) cout << 2 << '\n';
        else if(arr[2] != 5) cout << 3 << '\n';
        else cout << "Y\n";
    }
}
