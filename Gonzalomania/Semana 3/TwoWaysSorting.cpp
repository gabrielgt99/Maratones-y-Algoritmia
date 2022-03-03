#include <iostream>

using namespace std;

bool lengthsProcess(string words[], int numWords){
	bool ans = true;

	for(int i = 0; i<numWords-1; i++)
		if (words[i].size() > words[i+1].size())
			ans = false;

	return ans;
}

bool lexiProcess(string words[], int numWords){
	bool ans = true;
	int aux = 0;
	
	for (int i = 0; i<numWords-1; i++){
		aux = (words[i].size() < words[i+1].size()) ? words[i].size() : words[i+1].size();
		
		for (int j = 0; j<aux; j++)
			if (words[i][j] > words[i+1][j])
				ans = false;
	}
	
	return ans;
}

int main() {
	int numWords;
	cin >> numWords;

	string words[numWords];

	for (string &e : words)
		cin >> e;

	bool lengths = lengthsProcess(words, numWords);
	bool lexi = lexiProcess(words, numWords);

	if (lengths && lexi)
		cout << "both\n";
	else if (lengths)
		cout << "lengths\n";
	else if (lexi)
		cout << "lexicographically\n";
	else
		cout << "none\n";
	
	return 0;
}