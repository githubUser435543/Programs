#include <bits/stdc++.h>

using namespace std;

void doThing(int node){ cout << node << endl;}

void bfs(vector<vector<int>> &g, int start){
	queue<int> bfsQ; bfsQ.push(start);

	while(!bfsQ.empty()){
		int currNode = bfsQ.front(); bfsQ.pop();
		doThing(currNode);
		for (auto edge : g[currNode]){
			bfsQ.push(edge);
		}
	}
}

int main(){
	vector<int> v0 = {3, 4};
	vector<int> v1 = {};
	vector<int> v2 = {};
	vector<int> v3 = {1, 2};
	vector<int> v4 = {};
	vector<vector<int>> adjarr {v0, v1, v2, v3, v4};
	bfs(adjarr, 0);
	
	return 0;
}