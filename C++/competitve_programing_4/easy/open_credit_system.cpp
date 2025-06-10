#include <bits/stdc++.h>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--){
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[n - i - 1];

        int lo = arr[0]; int hiScore = -150001;
        for (int i = 1; i < n; i++){
            hiScore = (hiScore > arr[i] - lo) ? hiScore : (arr[i] - lo);
            lo = (lo < arr[i]) ? lo : arr[i];
        }
        printf("%d\n", hiScore);
    }
}

