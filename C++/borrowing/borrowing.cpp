#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> getInts(int numInts){
	vector<int> intList = {};
	for (int i = 0; i < numInts; i++){
		int tmp = 0;
		cin >> tmp;
		intList.push_back(tmp);
	}
	return intList;
}
int main(){
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++){
		int numPests;
		cin >> numPests;
		int lastDay = 0;
		int pens;
		cin >> pens;
		vector<int> pests = getInts(numPests);
		sort(pests.begin(), pests.end());	
		int penSubtraction = 0;
		int day = 1;
		int pestsChecked = 0; // index of friends that has alr been checked
		while (true){
			for (int i = pestsChecked; i < pests.size(); i++){
				if (pests[i] == day){
					penSubtraction++;
				}
				if (pests[i] > day){
					break;
				}
			}
			pens -= penSubtraction;
			if (pens < 0){
				lastDay = day;
				break;
			}
			day++;
		}
		cout << lastDay << "\n";
	}
}