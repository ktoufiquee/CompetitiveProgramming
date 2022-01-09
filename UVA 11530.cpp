#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int t, tc = 1;
    scanf("%d", &t);
    getchar();
    int arr[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    while(t--) {
        char s[110];
        gets(s);
        int len = strlen(s), sum = 0;
        for(int i = 0; s[i] != '\0'; ++i) {
            if(s[i] == ' ') {
                sum++;
            }
            if(s[i] >= 'a' && s[i] <= 'z') {
                sum += arr[s[i] - 'a'];
            }
        }
        printf("Case #%d: %d\n", tc++, sum);
    }
}

