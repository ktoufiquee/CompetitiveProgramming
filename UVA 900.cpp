#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    unsigned long long int arr[51];
    arr[1] = 1;
    arr[2] = 2;
    for(int i = 3; i < 51; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int n;
    while(cin >> n && n != 0) {
        cout << arr[n] << '\n';
    }
}