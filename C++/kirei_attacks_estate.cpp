#include <bits/stdc++.h>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

void dfs(const vector<vector<long long>> &g, long long node, vector<bool> &visited, vector<long long> &dangers, vector<long long> &mins, vector<long long> &res, long long parent){
    visited[node] = true;
    if (node == 1){
        mins[1] = dangers[1];
        res[1] = dangers[1];
    } else {
        mins[node] = min(dangers[node] - res[parent], dangers[node]);
        res[node] = max(dangers[node] - mins[parent], dangers[node]);
    }


    for (long long e : g[node]){
        if (not visited[e]) dfs(g, e, visited, dangers, mins, res, node);
    }
}


int main(){
    long long c; cin >> c;
    while (c--) {
        long long n; cin >> n;
        vector<long long> dangers(n+1);
        for (long long i = 1; i <= n; i++) cin >> dangers[i];

        vector<vector<long long>> g(n+1, vector<long long>(0));
        for (long long i = 0; i < n - 1; i++){
            long long u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<bool> visited(n+1);
        vector<long long> mins(n+1, (long long)1e9*(long long)2e5);
        vector<long long> res(n+1, (long long)-1e9*(long long)2e5);
        dfs(g, 1, visited, dangers, mins, res, -1);

        
        for (long long i = 1; i < size(res); i++){
            cout << res[i] << ((i == size(res) - 1) ? "\n" : " ");
        }
    }
}
