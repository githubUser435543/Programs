#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// adjList, 0
vector<int> bfs(vector<vector<int>> arrList, int start){
	int nodes = arrList.size();
	vector<int> distance(nodes, -1); // good
	queue<int> dq;
	// visited[n] = true ?? not sure what this is supposed to do
	dq.push(start);

	while (dq.size() > 0){
		int current = dq.front();
		dq.pop();
		for (int edge: arrList[current]){
			if (distance[edge] == -1){ // if we haven't visited one of the next nodes
				cout << "current node: " << current << " current distance: " << distance[current];
				distance[edge] = distance[current]+1;
				dq.push(edge);
			}
		}

	}
	return distance;
}

int main(){
	vector<int> conToZero {2,3};
	vector<int> conToOne {2};
	vector<int> conToTwo {0, 1, 4};
	vector<int> conToThree {0, 4, 5};
	vector<int> conToFour {2, 3};
	vector<int> conToFive {3};
	vector<vector<int>> adjList {conToZero, conToOne, conToTwo, conToThree, conToFour, conToFive};
	vector<int> distanceFromZero = bfs(adjList, 0);
	for (int item : distanceFromZero){
		cout << item << " ";
	}
	cout << endl;
	return 0;
}