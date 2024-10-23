#include <iostream>
#include <algorithm>

using std::cin, std::cout, std::string, std::endl, std::transform;
/*
void displayRules(){
	cout << "Player X and player O take turns making their move." << endl;
	cout << "On your turn you enter two cordnates from 1 to 3 with a space in between." << endl;
}
*/

string getString(){
	string inputString = "";
	cin >> inputString;
	return inputString;
}

string stringToLower(string inputString){
	return std::transform(
	inputString.begin(),
	inputString.end(),
	inputString.begin(),
	[](unsigned char c){ 
		return tolower(c); 
	});
}

int main(){
	
	cout << "Welcome To blindfold TicTacToe" << endl;
	cout << "Type \"Start\" to begin, \"Rules\" for rules, or \"Exit\" to exit" << endl;
	
	string userInput = getString();

	if (userInput == "exit"){
		return 0;
	}

	while(true){
	userInput = stringToLower(getString());	
		if (userInput == "exit"){
			cout << "bye" << endl;
			return 0;
		}
	}


return 0;
}

