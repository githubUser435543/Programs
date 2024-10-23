#include <iostream>
#include <vector>

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
	int cases = 0;
	cin >> cases;
	for (int i = 0; i < cases; i++){
		vector<long long int> multiplications;
		int numRegions = 0;
		cin >> numRegions;
		vector<int> time= getInts(numRegions);
		vector<int> turts= getInts(numRegions);
		for (int i = 0; i < numRegions; i++){
			long long int multi = time[i] * turts[i];
			multiplications.push_back(multi);
		}
		long long int lowest = multiplications[0];
		for (long long int item : multiplications){
			if (item < lowest and item > 0){ // item < 0 to accound for overflow
				lowest = item;
			}
		}
		cout << lowest << "\n";



	}
}