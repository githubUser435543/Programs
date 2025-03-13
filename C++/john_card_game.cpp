#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main(){
    int c; cin >> c;
    while (c--){
        // what order so all cows can play their cards
        int n, m; cin >> n >> m;
        vector<pair<vector<int>, int>> game;
        unordered_set<int> cardsInGame;
        bool duplicates = false;
        for (int i = 0; i < n; i++){
            game.push_back({{}, i});
            for (int j = 0; j < m; j++){
                int card; cin >> card;
                duplicates |= cardsInGame.count(card);
                game[size(game)-1].first.push_back(card);
            }
        }
        if (duplicates){
            cout << "-1\n";
            continue;
        }

        // iterate sorting
        // iterate keep track of #

        auto sortItem = [](pair<vector<int>, int>& item){sort(item.first.begin(), item.first.end());};
        for_each(game.begin(), game.end(), sortItem);
        sort(game.begin(), game.end());
        
        int onTop = -1;
        bool lost = false;
        vector<int> res;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                (game[j].first[i] > onTop) ? onTop = game[j].first[i] : lost = true;
                onTop = game[j].first[i];
            }
        }

        if (lost){
            cout << "-1\n";
            continue;
        }
        for (const pair<vector<int>, int>& i : game){
            res.push_back(i.second);
        }

        for (int i = 0; i < size(res); i++){
            ((i + 1) != size(res)) ? cout << res[i]+1 << " " : cout << res[i]+1 << "\n";
        }

        

    }
}
