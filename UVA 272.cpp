#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1, tc = 1;
    //cin >> t;
    vector<string> arr;
    while(true) {
        string s;
        getline(cin, s);
        arr.push_back(s);
        if(!cin) {
            break;
        }
        cin >> ws;
    }
    bool first = true;
    for(int i = 0; i < arr.size(); ++i) {
         for(int j = 0; j < arr[i].size(); ++j) {
             if(arr[i][j] == '\"' && first) {
                 cout << "``";
                 first = false;
             }
             else if(arr[i][j] == '\"' && !first) {
                 cout << "\'\'";
                 first = true;
             }
             else {
                 cout << arr[i][j];
             }
         }
         if(i != arr.size() - 1)
            cout << "\n";
    }
}

