#include <bits/stdc++.h>

using namespace std;
/*
void dfs(vector<vector<int>> &g, int startNode){
	cout << "Curr Node: " << startNode << endl;
	for (auto edge : g[startNode]){
		dfs(g, edge);
	}
}
*/

void dfs(vector<vector<int>> &g, int startNode){for (auto edge : g[startNode]){dfs(g, edge);}}


int main(){
	vector<int> v0 = {3, 4};
	vector<int> v1 = {};
	vector<int> v2 = {};
	vector<int> v3 = {1, 2};
	vector<int> v4 = {};
	vector<vector<int>> adjarr {v0, v1, v2, v3, v4};
	dfs(adjarr, 0);
	
	return 0;
}