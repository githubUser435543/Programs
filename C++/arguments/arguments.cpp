#include <iostream>

using namespace std;

int main (int argc, char *argv[]){
	for (int i = 0; i < sizeof(*argv)/sizeof(*argv[0]); i++){
		if (*argv[i] == 'c'){
		cout << "hello" << endl;
		}
	}
	return 0;
}
