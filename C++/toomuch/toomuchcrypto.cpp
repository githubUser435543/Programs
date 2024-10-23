#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

template<class T> using vec = vector<T>;
template<class T, size_t N> using arr = array<T, N>;


using ll = long long;

int main(){
	int cases; cin >> cases;
	for (int i = 0; i < cases; i++){
		unordered_map<char, char> cypher;
		unordered_map<char, char> finalCypher;
		string res = "";
		string plainText; cin >> plainText;
		string alphabet = "abcdefghijklmnopqrstuvwxyz";
		string cyAfter; cin >> cyAfter;
		string cyAfterCopy = cyAfter;
		int k; cin >> k;
		// make first cypher
		for (int i = 0; i < int(alphabet.size()); i++) cypher.insert({alphabet[i], cyAfter[i]});
		//#cypher the cypher k-1 times (its already done once)
		for (int i = 0; i < (k - 1); i++){
			for (int x = 0; x < int(alphabet.size()); x++){
				char curr = cyAfterCopy[x];
				cyAfterCopy[x] = cypher[curr];
			}
		}
	// make final cypher
		for (int i = 0; i < int(alphabet.size()); i++) finalCypher.insert({alphabet[i], cyAfterCopy[i]});
	
	// cypher plaintext
	for (int i = 0; i < int(plainText.size()); i++) res += finalCypher[plainText[i]];
	cout <<  res << "\n";


	}
}
/*for case in range(int(input())):
	cypher = {}
	finalcyph = {}
	res = ""
	plaintext = list(input().strip())
	alphabet = list("abcdefghijklmnopqrstuvwxyz")
	cyAfter = list(input().strip())
	cyAfterCopy = cyAfter # final cyher
	k = int(input())
	# make cypher
	for i in range(len(alphabet)): cypher[alphabet[i]] = cyAfter[i]

	# cypher the cypher k-1 times (its already done once)
	for i in range(k-1):
		for x in range(len(alphabet)):
			curr = cyAfterCopy[x]
			cyAfterCopy[x] = cypher[curr]

	# make final cypher
	for i in range(len(alphabet)): finalcyph[alphabet[i]] = cyAfterCopy[i]
	
	# cypher plaintext
	for i in range(len(plaintext)): res += finalcyph[plaintext[i]]
	print(res)

*/