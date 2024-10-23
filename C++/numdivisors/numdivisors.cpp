#include <iostream>

using std::endl, std::cin, std::cout, std::string, std::stoi, std::strtoul;

int main(){
	string casesString = "";
	cin >> casesString;
	int cases = stoi(casesString);
	for (int i = 0; i < cases; i++){
		unsigned long int number = 0;
		string numberString;
		cin >> numberString;
		number = strtoul(numberString.c_str(), nullptr, 10);
		unsigned long int currentDivisor = 1;
		unsigned long int  divisors = 0;
		while (true){
			if (number % currentDivisor == 0){
				unsigned long int  result = number / currentDivisor;
				if (result > currentDivisor){
					divisors += 2;

				} else if (result == currentDivisor){
					divisors += 1;
					break;
				} else {
					break;
				}
			}
			currentDivisor += 1;
		}
		cout << divisors << endl;
	}
	return 0;
}

/*
for case in range(cases):
    number: int = int(input())
    currentDivisor: int = 1
    divisors: int = 0
    while True:
        if number % currentDivisor == 0:
            result = number / currentDivisor
            if result > currentDivisor:
                divisors += 2
            elif result == currentDivisor:
                divisors += 1
                break
            else:
                break
        currentDivisor += 1
    print(divisors)
*/
