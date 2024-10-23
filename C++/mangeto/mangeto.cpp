#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

// yup, this is mark's template
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

bool twoColor(vec<vi>&g, int start){
	vi colors(g.size(), -1);
	queue<int> q;
	q.push(start);
	colors[start] = 0;
	while (q.size() > 0){
		int cur = q.front(); q.pop();
		for (int edge: g[cur]){
			if (colors[edge] == colors[cur]) return false;
			if (colors[edge] != -1) continue;
				colors[edge] = colors[cur] == 0 ? 1:0;

		}
	}
	return true;

}


int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(ios::badbit | ios:: failbit);
	// input
	int cases; cin >> cases;
	for (int c = 0; c < cases; c++){
		int nodes; cin >> nodes;
		int edges; cin >> edges; // everything here up is good
		vec<vi> adjArr;
		for (int i = 0; i < nodes; i++){	
			vi emptyVect {};
			adjArr.push_back(emptyVect);
		}
		for (int i = 0; i < edges; i++){
			int cit1; cin >> cit1;
			cit1 -= 1;
			int cit2; cin >> cit2;
			cit2 -= 1;
			adjArr[cit1].push_back(cit2);
			adjArr[cit2].push_back(cit1);
		}
		debug(adjArr);
		// bfs
		bool can2Color = twoColor(adjArr, 0);
		if (can2Color){
			cout << "Placement Found" << "\n";
		} else {
			cout << "Donate to a charity" << "\n";
		}
	}
}