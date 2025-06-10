#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

vector<bool> primeSieve(int n){
    vector<bool> sieve(n + 1, true);
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 0; i < sqrt(size(sieve) + 1); i++){
        if (not sieve[i]) continue;
        for (int j = i*2; j < size(sieve); j += i)
            sieve[j] = false;

    }
    return sieve;
}

int main(){
    vector<bool> isPrime = primeSieve(10000000);
    vector<int> primes;
    for (int i = 0; i < size(isPrime); i++)
        if (isPrime[i]) primes.push_back(i);

    debug(size(primes));

    int c; cin >> c;
    while (c--) {
        int n; cin >> n;
        // lcm(a, b) == a
        // b = a*prime
        //
        // (size of primes up to n) * n;
        int primesInRange = 0;
        for (int i : primes)
            if (i <= n) primesInRange++;
        // for each a binarysearch the y that gets us b
        int pairs = 0;


        
    }
}
