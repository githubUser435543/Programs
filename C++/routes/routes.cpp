#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

template<class T> using vec = vector<T>;
template<class T, size_t N> using arr = array<T, N>;


using ll = long long;
using ld = long double;
using pi = pair<int, int>;
using pl = pair<ll, ll>;

using vb = vec<bool>;
using vi = vec<int>;
using vl = vec<ll>;
using vd = vec<ld>;
using vs = vec<string>;
using vpi = vec<pi>;
using vpl = vec<pl>;


// returns vector of distances from start
// make sure to subtract 1 from all nodes before entering them in
vi dijkstras(vec<vpi> &g){
	vi distance(size(g), -1); distance[0] = 0;
	vb seen(size(g), false);	
	priority_queue<pi, vpi, greater<pi> > q; q.push({0, 0});

	while (q.size() > 0){
		pi curr = q.top(); q.pop();
		int currNode = curr.second;
		int currDist = curr.first;

		if (seen[currNode]) continue;
		seen[currNode] = true;

		for (pi nxt: g[currNode]){
			int edgeNode = nxt.second;
			int edgeDistance = nxt.first;
			int distToNxt = currDist + edgeDistance;
			if (distToNxt < distance[edgeDistance]){
				distance[edgeNode] = distToNxt;
				q.emplace(edgeDistance, edgeNode);
			}
		}

	}
	return distance;
}

int main(){	
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(ios::badbit | ios:: failbit);
	int cases; cin >> cases;
							// look, c++, so meta
	for (int c = 0; c < cases; c++){
		int nodes; cin >> nodes;
		int edges; cin >> edges;
		int queries; cin >> queries;
		vec<vpi> graph(nodes, vec<pi>{});
		//for (int i = 0; i < nodes; i++) graph.pushba
		for (int i = 0; i < edges; i++){
			int node1; cin >> node1; node1--;
			int node2; cin >> node2; node2--;
			int dist; cin >> dist;
			graph[node1].emplace_back(dist, node2);
			graph[node2].emplace_back(dist, node1);
		}
		debug(graph);
		vi distances = dijkstras(graph);
		for (int i = 0; i < queries; i++){
			int query; cin >> query;
			cout << distances[query-1] << "\n";
		}
	}
}