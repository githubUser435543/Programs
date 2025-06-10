#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

vector<int> constexpr calcPerfectSquares(){
    vector<int> squares;
    for (int i = 1; i < 501; i++) squares.push_back(i*i);
    return squares;
}

int main(){
    unordered_set<int> squares;
    for (int i : calcPerfectSquares())
        squares.insert(i);

    int c; cin >> c;
    while (c--) {
        int n; cin >> n;
        vector<vector<int>> grid(n, vector<int>(n, -1));
        int i, j, k; 
        i = j = (n + 1) / 2 - 1;
        grid[i][j] = 0;
        k = 1;
        int direction = 0;
        int forward = 0;
        while (k < n*n){
            for (int l = 0; l < forward; l++){
                

                if (direction == 0) j++;
                else if (direction == 1) i++;
                else if (direction == 2) j--;
                else if (direction == 3) i--;
                k++;
                grid[i][j] = k - 1;
                if (l == forward - 1)
                    direction = (direction + 1) % 4;
            }

            if (squares.contains(k)){
                if (k != 1)
                    // (a % b + b) % b
                    direction = ((direction - 1) % 4 + 4) % 4;
                if (k == n*n) break;
                k++;
                forward++;
                if (direction == 0) j++;
                else if (direction == 1) i++;
                else if (direction == 2) j--;
                else if (direction == 3) i--;
                grid[i][j] = k - 1;
                direction = (direction + 1) % 4;
            }
        }

        for (vector<int> l : grid){
            for (int i = 0; i < size(l); i++){
                cout << l[i] << ((i != size(l) - 1) ? " " : "\n");
            }
        }
    }
}
