#include <bits/stdc++.h>
using namespace std;

long long int divisorSum(long long int n)
{
    long long int sum = 0;
    for(long long int i = 1; i <= n / 2; ++i) {
        if(n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    long long int n, sum = 0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld", &n) && n) {
        sum = divisorSum(n);
        if(n > 9999) {
            printf("");
        }
        else if(n > 999) {
            printf(" ");
        }
        else if(n > 99) {
            printf("  ");
        }
        else if(n > 9) {
            printf("   ");
        }
        else {
            printf("    ");
        }
        if(sum == n) {
            printf("%lld  PERFECT\n", n);
        }
        else if(sum > n) {
            printf("%lld  ABUNDANT\n", n);
        }
        else {
            printf("%lld  DEFICIENT\n", n);
        }
    }
    printf("END OF OUTPUT\n");
}