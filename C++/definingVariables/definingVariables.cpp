#include <iostream>

using std::cout, std::endl, std::string;

int main(){
	int one, two, three;
	one = 1;
	two = 2;
	three = 3;
	int four = 4, five = 5, six = 6;
	cout << one << two << three << four << five << six << endl;
	int undefined; // technicly it's uninitialized, damn I can't spell
	cout << undefined << endl;
	string hello = "hello";
	cout << hello << endl;
}
