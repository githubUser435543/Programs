#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    int i = 1;
    while (c--) {
        int arr[13];
        for (int i = 0; i < 13; i++){
            int tmp; cin >> tmp;
            arr[i] = tmp;
        }

        bool zs = false;
        for (int i : arr){
            if (i == 0){
                zs = true;
            }
        }
    zs ? printf("Set #%d: No\n", i) : printf("Set #%d: Yes\n", i);
    i++;
    }
}
