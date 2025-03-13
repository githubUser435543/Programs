#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main(){
    vi ones;
    vi twos;
    vi threes;

    int c; cin >> c;
    while (c--) {
        int n, k; cin >> n >> k;
        vi arr;
        int tmp;
        for (int i = 0; i < n; i++){cin >> tmp; arr.push_back(tmp);}
        if (k == 1){
            cout << "YES\n";
            continue;
        }

        for (int i = 0; i < n; i++){
            if (arr[i] == 1){
                ones.push_back(i);
            } else if (arr[i] == 2){
                twos.push_back(i);
            } else {
                threes.push_back(i);
            }
        }
        vi afterOneE;
        vi afterTwoE;
        vi afterThreeE;
        for (int i = ones[0]+1; i < n; i++){
            if (arr[i] == 1) break;
            afterOneE.push_back(arr[i]);
        }
        if (not twos.empty()){
            for (int i = twos[0]+1; i < n; i++){
                if (arr[i] == 2) break;
                afterTwoE.push_back(arr[i]);
            }
        }
        if (not threes.empty()){
            for (int i = threes[0]+1; i < n; i++){
                if (arr[i] == 3) break;
                afterThreeE.push_back(arr[i]);
            }
        }
        int buf = (size(afterOneE) > size(afterTwoE)) ? size(afterOneE) : size(afterTwoE);
        buf = (buf > size(afterThreeE)) ? buf : size(afterThreeE);

        while (buf--){arr.push_back(0);}

        bool allowed = true;
        for (int o = 0; o < size(afterOneE); o++){
            for (int i : ones){
                if (arr[i + o] != afterOneE[o]){
                    allowed = false;
                }
            }
            if (not allowed) break;
        }
        if (not allowed){
            cout << "NO\n";
            continue;
        }
        
    
        for (int o = 0; o < size(afterTwoE); o++){
            for (int i : twos){
                if (arr[i + o] != afterTwoE[o]){
                    allowed = false;
                }
            }
            if (not allowed) break;
        }
        if (not allowed){
            cout << "NO\n";
            continue;
        }


        for (int o = 0; o < size(afterThreeE); o++){
            for (int i : threes){
                if (arr[i + o] != afterThreeE[o]){
                    allowed = false;
                }
            }
            if (not allowed) break;
        }
        if (not allowed){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
}
