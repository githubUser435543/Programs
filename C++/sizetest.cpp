#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout << "post" << "\n";
	for (int i = 0; i < 10; i++){
		cout << i++;
	}

	cout << "\n" << "pre" << "\n";
	for (int i = 0; i < 10; ++i){
		cout << ++i;
	}
	cout << "\n";
	return 0;
}