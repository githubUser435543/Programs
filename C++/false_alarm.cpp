#include <bits/stdc++.h>
#include <cstdio>
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
        int n, x; cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int firstIndex = -1;
        int lastIndex = -1;
        for (int i = 0; i < n; i++){
            if (arr[i]){
                firstIndex = i;
                break;
            }
        }
        for (int i = size(arr) - 1; i > -1; i--){
            if (arr[i]){
                lastIndex = i;
                break;
            }
        }

        if (firstIndex == -1 or (lastIndex - firstIndex + 1) <= x){
            puts("YES");
        } else {
            puts("NO");
        }

    }

}
