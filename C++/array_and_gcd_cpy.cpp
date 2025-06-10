#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    vector<bool> primeSieve(1e7, true);
    primeSieve[0] = false;
    primeSieve[1] = false;
    for (long long i = 2; i < sqrt(4*1e5) + 1; i++){
        if (not primeSieve[i]) continue;
        for (long long j = 2*i; j < size(primeSieve); j += i)
            primeSieve[j] = false;
    }


    vector<long long> primes;
    for (long long i = 0; i < size(primeSieve); i++){
        if (primeSieve[i]) primes.push_back(i);
    }

    vector<long long> primePsum(size(primes)+1);
    partial_sum(primes.begin(), primes.end(), primePsum.begin()+1);

    long long c; cin >> c;
    while (c--){

        // all pairs of items should be at least 2 a coprime

        // what makes an array sum valid for an amount of elements
        
        // If we have too many coins, we don't have to use all them
        // The lowest required amount of coins would be a psum of primes
        long long n; cin >> n;
        vector<long long> arr(n); 
        for (auto &i : arr) cin >> i;


        long long res = 0;
        sort(arr.begin(), arr.end());
        partial_sum(arr.rbegin(), arr.rend(), arr.rbegin());
        debug(arr);
        for (int i = 0; i < size(arr); i++){
            res = i;
            if (arr[i] >= primePsum[n - i])
                break;
        }

        cout << res << "\n";
    }
}
