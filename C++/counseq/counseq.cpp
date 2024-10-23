#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int combinations = 0;
// long 
// int 2.1 x 10^9
// both j and k should start at 0
void solution(vector<char> searchIn, int i, vector<char> searchFor, int j){
	// searchin[i]
	// searchFor[j]
	int searchForSize = searchFor.size();
	if (j == searchForSize){ // if we found the word we're searching for 
		combinations++;
		return;
	}
	else {
		for (unsigned int k = i; k < searchIn.size() - 1; k++){ 
			if (searchIn[i] == searchFor[j]){
				// passing in k as i will make sure we start looking for
				// the next character after the previous one
				solution(searchIn, k, searchFor, j+1); 
			}
		}
	}
}

unordered_set<char> rmDupes(vector<char> str){
	
	unordered_set<char> usefulChars = {};
	for (char item : str){
		usefulChars.insert(item);
		if (usefulChars.size() == 26){
			break;
		}
	}
	return usefulChars;
}

vector<char> rmUselessChars(vector<char> str1, unordered_set<char> wantedChars){
	vector<char> goodList = {};
	for (char item : str1){
		if (wantedChars.find(item) != wantedChars.end()){ // if we want the character
			goodList.push_back(item);
		}
	}
	return goodList;
}

int main(){

	long long int cases = 0;
	cin >> cases;

	for (int i = 0; i < cases; i++){
		string firstString = "";
		cin >> firstString;	
		vector<char> stringList1(firstString.begin(), firstString.end());

		string secondString = "";
		cin >> secondString;
		vector<char> stringList2(secondString.begin(), secondString.end());

		unordered_set<char> charsInSecond = rmDupes(stringList2);
		stringList1 = rmUselessChars(stringList1, charsInSecond);
		solution(stringList1, 0, stringList2, 0);
		cout << "combinations: " << combinations << endl;

		combinations = 0; // reset combinations before next case bc it's global
	}

	return 0;
}
