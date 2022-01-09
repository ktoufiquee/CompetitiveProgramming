#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int arr[101];
    arr[0] = 0;
    for(int i = 1; i <= 100; ++i) {
        arr[i] = (i * i) + arr[i - 1];
    }
    int n;
    while(cin >> n && n != 0) {
        cout << arr[n] << endl;
    }
}
