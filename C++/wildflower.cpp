#include <bits/stdc++.h>
#include <csignal>
#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

#ifdef LOCAL
#include <debug.h>
#else
#define debug(...)
#endif

int main(){
    long long c; cin >> c;
    while (c--) {
        long long n; cin >> n;
        vector<vector<long long>> adj(n+1);
        for (long long i = 0; i < n - 1; i++){
            long long u, v; cin >> u >> v;
            adj.at(u).push_back(v);
            adj.at(v).push_back(u);
        }
        long long maxEdges = 0;
        for (vector<long long> node : adj){
            maxEdges = max((long long)size(node), maxEdges);
        }

        if (maxEdges == 0){
            cout << "2" << "\n";
            continue;
        } else if (maxEdges == 1){
            cout << "4" << "\n";
            continue;
        } else if (maxEdges == 2){
            cout << "4" << "\n";
            //cout << (1 << n) << "\n";
        } else if (maxEdges == 3){

            long long threeIntersections = 0;
            for (vector<long long> node : adj)
                if (size(node) == 3) threeIntersections++; 
            if (threeIntersections > 1){
                cout << "0" << "\n";
                continue;
            }

            vector<long long> visited(n+1);
            vector<long long> counts;
            long long count = 0;
            bool counting = false;
            stack<long long> stk;
            stk.push(1);

            while (!stk.empty()) {

                long long node = stk.top(); stk.pop();
                visited[node] = true;
                if (counting) count++;
                for (long long e : adj[node]){
                    if (!visited[e]) stk.push(e);
                }
                if (size(adj[node]) == 3){
                    counting = true;
                } else if (size(adj[node]) == 1 and counting){
                    counts.push_back(count);
                    count = 0;
                }
            }
            long long resShift = ((n - 2*min(counts[0], counts[1])));
            long long res = 1;
            for (long long i = 0; i < resShift; i++){
                res = res << 1;
                res %= (long long)1e9 + 7;
            }
            if (counts[0] != counts[1]){
                res += (res >> 1);
                res %= (long long)1e9 + 7;
            } else {
                res = res << 1;
                res %= (long long)1e9 + 7;
            }
            cout << res << "\n";
        } else {
            cout << "0" << "\n";
            continue;
        }

    }
}
