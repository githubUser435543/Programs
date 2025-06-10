#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c; cin >> c;
    while (c--) {
        int n; cin >> n;

        pair<int, int> hiY = {-1, -1e9};
        pair<int, int> loY = {-1, 1e9};
        pair<int, int> hiX = {-1e9, -1};
        pair<int, int> loX = {1e9, -1};

        vector<pair<int, int>>  monsters;
        for (int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            monsters.emplace_back(x, y);
        }
        for (auto [x, y] : monsters){
            hiY = (hiY.second > )
        }


        






    }
}
