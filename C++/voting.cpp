#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> stringToListOfInts(string in){
	vector<int> list;
	int tmpNum = 0;
	for (unsigned int i = 0; i < in.length(); i++){
		if (isdigit(in[i])){	
			tmpNum = tmpNum*10 + (in[i] - '0');
		}
		else {
			list.push_back(tmpNum);
			tmpNum = 0;
		}
	}
	if (isdigit(in[in.length()-1])){
		list.push_back(tmpNum);
	}
	return list;
}

int main(){	
	string casesStr = "";
	cin >> casesStr;
	int cases = 0;
	cases = stoi(casesStr);
	for (int i = 0; i < cases; i++){
		string inputStr;
		getline(cin, inputStr);
		vector<int> lineOneInput = stringToListOfInts(inputStr);
		int peoplePerLine = lineOneInput[0];
		int queries = lineOneInput[0];
		int canidate = lineOneInput[0];
		string votingPreferencesStr = "";
		getline(cin, votingPreferencesStr);
		vector<int> votingPreferences = stringToListOfInts(votingPreferencesStr);
		for (int i = 0; i < queries; i++){
	}
}
/*
int main(){
	string casesStr = "";
	cin >> casesStr;
	int cases = 0;
	cases = stoi(casesStr);
	for (int i = 0; i < cases; i++){
		string inputStr;
		getline(cin, inputStr);
		vector<int> lineOneInput = stringToListOfInts(inputStr);
		int peoplePerLine = lineOneInput[0];
		int queries = lineOneInput[0];
		int canidate = lineOneInput[0];
		string votingPreferencesStr = "";
		getline(cin, votingPreferencesStr);
		vector<int> votingPreferences = stringToListOfInts(votingPreferencesStr);
		for (int i = 0; i < queries; i++){
			string queryInfoStr;
			getline(cin, queryInfoStr);
			vector<int> queryInfo = stringToListOfInts(queryInfoStr);
			int firstPerson = queryInfo[0];
			int lastPerson = queryInfo[1];
			int queryCanidate = queryInfo[2];
			int votedForQuery = 0;
			vector<int> voters(firstPerson, lastPerson);
			for (i=firstPerson-1;i < lastPerson; i++){
				if (voters[i] == queryCanidate){
					votedForQuery += 1;
				}
				cout << votedForQuery;
			}

		}
	}
}
*/


/*
#!/bin/python3
import sys
cases = int(input())
# n = people
# q = quries
# c = canidate
# n lines w/ voting preference

for case in range(cases):
    peoplePerLine, queries, canidates = list(map(int, input().split()))
    votingPreferences = list(map(int, input().split()))
    for query in range(queries):
        firstPerson, lastPerson, queryCanidate  = list(map(int, input().split()))
        votedForQuery = 0
        for person in range(firstPerson-1, lastPerson):
            if votingPreferences[person] == queryCanidate:
                votedForQuery += 1
        print(votedForQuery)
*/
