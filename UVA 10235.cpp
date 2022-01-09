#include <bits/stdc++.h>
using namespace std;

bool prime[1000001];

void primeInitialize() {
    memset(prime, true, sizeof(prime));
    for(long long int i = 2; i * i <= 1000000; ++i) {
        if(prime[i]) {
            for(long long int j = i * 2; j <= 1000000; j += i) {
                prime[j] = false;
            }
        }
    }
}

/*
bool primeCheck(long long int n) {
    for(int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
*/

long long int reverseInt(long long int n) {
    long long int rev = 0;
    while(n > 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10; 
    }
    return rev;
}

int main()
{
    ios_base::sync_with_stdio(0);
    primeInitialize();
    long long int n, r;
    bool isPrime, isRevPrime;
    while(cin >> n) {
        r = reverseInt(n);
        isPrime = prime[n], isRevPrime = prime[r];
        if(isPrime && isRevPrime && n != r) {
            cout << n << " is emirp.\n";
        }
        else if(isPrime) {
            cout << n << " is prime.\n";
        }
        else {
            cout << n << " is not prime.\n";
        }
    }
}