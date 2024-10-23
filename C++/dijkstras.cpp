#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

#define sz(x) int(size(x))
template<class T> using vec = vector<T>;
using ll = long long;


// why does it return vectors?
pair<vector<ll>, vector<int>> dijkstras(vector<vector<pair<int, int>>> &g, int r = 0){
	vector<ll> dist(sinflz(g), LLONG_MAX/2);
	vector<int> from(sz(g), -1);
	priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> pq;
	dist[r]

}
