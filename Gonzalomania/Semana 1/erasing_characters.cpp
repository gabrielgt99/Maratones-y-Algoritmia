// Erasing Characters

#include <iostream>
#include <string>

using namespace std;

string deleteChars(string word){
	int id1 = 0;
	int id2 = 1;
	
	while (id2 != word.length()){

		if (word[id1] == word[id2] && word.length()>0){
			string newWord = word.substr(0,id1) + word.substr(id2+1, word.length());
			return deleteChars(newWord);
		}
			
		id1 = id2;
		id2++;
	}

	return word;
}

int main() {
	string word;
	// getline(cin, word, '\n');

	cin >> word;
	

	cout << deleteChars(word) << endl;
	return 0;
}