#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int c; cin >> c;
    while(c--){
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        for (int i = 0; i < n; i++){int tmp; cin >> tmp; arr.push_back(tmp);}


        sort(arr.begin(), arr.end());
        // apearances, num
        vector<pair<int, int>> numUnique;
        int currApperances = 0;
        int last = arr[0];
        for (int i : arr){
            if (i == last){
                currApperances++;
            } else {
                numUnique.emplace_back(currApperances, last);
                currApperances = 1;
                last = i;
            }
        }
        numUnique.emplace_back(currApperances, last);

        sort(numUnique.begin(), numUnique.end());
        int removals = 0;
        for (pair<int, int> i : numUnique){
            k -= i.first;
            if (k < 0){
                break;
            }
            else{
                removals++;
            }
        }
        int res = (size(numUnique) - removals != 0) ? size(numUnique) - removals : 1;
        cout << res << "\n";

        

    }
}
