#include <bits/stdc++.h>
#include <functional>
#include <string>
#include <unordered_set>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<int> nums;
    nums.reserve(20000);
    int cases; cin >> cases;
    while (cases--){
        int num; cin >> num;
        nums.insert(num);
    }
    cout << size(nums);
    return 0;
}
