#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int &i : arr) cin >> i;

        unordered_map<int, vector<int>> numToIndexes;
        for (int i : arr){
            if (numToIndexes.contains(i)){
                numToIndexes[i].push_back(i);
            } else {
                numToIndexes[i] = vector<int>(1, i);
            }
        }
        // weight (highest first), cost (-1 or 0), node
        vector<bool> visited(n);
        priority_queue<vector<int>> pq;
        for (int i = 0; i < size(arr); i++) pq.push({arr[i], -1, i});
        
        int clones = 0;
        while (!pq.empty()){
            vector<int> curr = pq.top(); pq.pop();
            int cNode = curr[2];
            if (visited[cNode]) continue;
            visited[cNode] = 1;
            if (curr[1] == -1) clones++;
            if (cNode != 0) pq.push({arr[cNode-1], 0, cNode-1});
            if (cNode != n - 1) pq.push({arr[cNode+1], 0, cNode+1});
        }

        cout << clones << "\n";



    }
}
