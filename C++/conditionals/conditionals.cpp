#include <iostream>

using std::cout, std::string, std::endl; 

int main(){
	int one = 1;
	int two = 2;
	string result = (one > two) ? "one is greater" : "two is greater";
	cout << result << endl;
	cout << true << endl;
	return 0;
}
