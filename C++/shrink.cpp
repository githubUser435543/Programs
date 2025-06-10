#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    int c; cin >> c;
    while (c--){
        int n; cin >> n;
        vector<int> arr = {1};
        for (int i = 3; i <= n; i++)
            arr.push_back(i);
        arr.push_back(2);

        for (int i : arr){
            (i == 2) ? (cout << "2\n") : (cout << i << " ");
        }
    }

}
