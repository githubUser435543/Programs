#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<string, int> cityToDist;
void storeCityInput(){
	string rawInput;
	string city;
	getline(cin, rawInput);
	for (char letter : rawInput){
		if (letter == ' '){
			break;
		}
		city += letter;
	}	
	int dist = stoi(rawInput);
	cityToDist.insert({city, dist});
}

vector<int> getInts(int numInts){
	vector<int> intList = {};
	for (int i = 0; i < numInts; i++){
		int tmp = 0;
		cin >> tmp;
		intList.push_back(tmp);
	}
	return intList;
}

long long int query(string start, string end){
	cout << "end dist: " << cityToDist[end] << endl;
	cout << "start dist: " << cityToDist[start] << endl;
	return abs(cityToDist[end] - cityToDist[start]);
}

int main(){
	vector<int> citiesAndQuries = getInts(2);
	int cities = citiesAndQuries[0];
	int queries = citiesAndQuries[1];
	for (int i = 0; i < cities; i++){
		storeCityInput();
	}

	for (int i = 0; i < queries; i++){
		string startCity;
		cin >> startCity;
		string endCity;
		cin >> endCity;
		long long int finalDistance = query(startCity, endCity);
		cout << finalDistance << "\n";
	}
	unordered_map<string, int> cityToDist;
}