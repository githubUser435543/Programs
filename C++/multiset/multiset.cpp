#include <iostream>
// you can remove u and addd numbers that add u
// basicly split u into k parts
using namespace std;

int main(){
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++){
		//cout << "i: " << i << endl;
		int toSplit = 0;
		cin >> toSplit;
		int splitAmt = 0;
		cin >> splitAmt;
		int splits = 0;
		while (toSplit > 1){
			//cout << "debug toSplit: " << toSplit << endl;
			toSplit -= (splitAmt-1);
			splits++;
		}
		cout << splits << "\n";
	}
}