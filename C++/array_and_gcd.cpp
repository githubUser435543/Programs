#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){

    vector<bool> primeSieve(6e6, true);
    primeSieve[0] = false;
    primeSieve[1] = false;
    for (long long i = 2; i < sqrt((int)6e6) + 1; i++){
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

        long long n; cin >> n;
        vector<long long> arr(n); 
        for (auto &i : arr) cin >> i;

        long long sum = reduce(arr.begin(), arr.end());

        if (sum >= primePsum[n]){
            cout << "0\n";
            continue;
        }

        long long res = 0;
        sort(arr.begin(), arr.end());
        for (long long i = 0; i < size(arr) - 1; i++){
            res++;
            sum -= arr[i];
            if (sum >= primePsum[n - 1 - i])
                break;
        }

        cout << res << "\n";
    }
}
