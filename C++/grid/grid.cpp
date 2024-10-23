#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int bfs(int start, int end, vector<vector<int>> graph){
	vector<int> nodesVisited(end, -1); // might need to add to end here, also, not sure why this is throwing an error
	queue<int> q; 
	q.push(start);
	nodesVisited[0] = 0; // we start at zero and mark it as visited, also contains the depth
	while (q.size() > 0){
		int currentNode = q.front();
		q.pop();
		for (int edge : graph[currentNode]){ // we check the edges of our curr node
			if (nodesVisited[edge] != -1){ // if we havent visited this node before
				q.push(edge); // we append it to the queue becuase the current depth nodes are already inside
				nodesVisited[edge] = nodesVisited[currentNode] + 1;
				if (edge == end){
					return nodesVisited[edge];
				}
			}
		}

	}
	return -1; // if we didn't find the end
}

int main(){
	int cases = 0;
	cin >> cases;
	for (int i = 0; i < cases; i++){

		vector<string> twoDArr;
		int hight = 0;
		int width = 0;
		cin >> hight;
		cin >> width;
		for (int i = 0; i < hight; i++){
			string row = "";
			cin >> row;
			twoDArr.push_back(row);
		}
		vector<vector<int>> adjArr;
		int nodeNum = 0;
		for (int i = 0; i < hight; i++){ // i up down
			vector<int> edges;
			for (int j = 0; j < width; j++){ // j left right
				int movement = twoDArr[i][j];
				if (i-movement > 0) edges.push_back(nodeNum - movement); // add edge up
				if (j-movement > 0) edges.push_back(nodeNum + movement); // add edge down
				if (i+movement < twoDArr.size()) edges.push_back(nodeNum - movement); // add edge left
				if (j+movement < twoDArr.size()) edges.push_back(nodeNum + movement); // add edge right
				adjArr.push_back(edges);
				nodeNum++;
			}
		}
		cout << "[" << "\n";
		for (vector<int> node : adjArr){
			cout << "(";
			for (int edge : node){
				cout << edge << ", " << endl;
			}	
			cout << ")" << endl;
		}
		cout << "]";
		cout << bfs(0, (width * hight) - 1, adjArr) << "\n";
	}
	return 0; 
}