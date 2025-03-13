#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr;
    int tmp;
    for (int i = 0; i < n; i++){cin >> tmp; arr.push_back(tmp);}
    //
    sort(arr.begin(), arr.end());
    vector<int> mexModifications;
    int excluded = 0;
    int instances = 0;
    //int mex = 0;
    for (int i = 0; i < n; i++){
        if (i == 0){
            for (int j = 0; j < arr[i]; j++){mexModifications.push_back(j);}
            excluded += arr[i];
            instances++;
        } else if (arr[i] != arr[i-1]){
            mexModifications.push_back(max(excluded, instances));
            instances = 1;
            //mex = arr[i]
            for (int j = 0; j < arr[i] - arr[i-1] - 1; j++){
                mexModifications.push_back(excluded + j);
            }
            excluded += arr[i] - arr[i-1] - 1;
        } else {
             instances++;
        }
    }
    mexModifications.push_back(max(excluded, instances));
    for (int j = 0; j < n-arr[size(arr)-1]; j++){
        mexModifications.push_back(excluded + j);
    }
    
    for (int i : mexModifications){cout << i << "\n";}
}
