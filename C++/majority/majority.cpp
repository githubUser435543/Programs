#include <iostream>
#include <vector>
using namespace std;

vector<int> rmDupe0s(vector<int> binList){
	vector<int> goodList = {};
	int lastItem = 1;
	for (int item : binList){
		if (lastItem == 1 or item == 1){
			goodList.push_back(item);
		}
	}
	return goodList;
}

int main(){
	int cases = 0;
	for (int i = 0; i < cases; i++){
		string strInput;
		getline(cin, strInput);
		getline(cin, strInput);
		getline(cin, strInput);
		getline(cin, strInput);

		for (char item : strInput){
			cout << item << endl;	
		}
	}
}