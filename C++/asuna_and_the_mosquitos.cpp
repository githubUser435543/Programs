#include <bits/stdc++.h>
using namespace std;

int main(){
    long long c; cin >> c;
    while (c--) {
        long long n; cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        vector<long long> odds;
        vector<long long> evens;
        for (long long i = 0; i < n; i++) (arr[i] & 1) ? odds.push_back(arr[i]) : evens.push_back(arr[i]);
        if (size(odds) == 0){
            cout << *max_element(evens.begin(), evens.end()) << "\n";
            continue;
        } else if (size(evens) == 0){
            cout << *max_element(odds.begin(), odds.end()) << "\n";
            continue;
        }

        // +1 because first odd is free
        cout << reduce(arr.begin(), arr.end()) - size(odds) + 1 << "\n";
    }
}
