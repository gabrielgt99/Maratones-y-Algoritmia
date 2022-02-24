// Ordinary Numbers

#include <iostream>

using namespace std;
int process (int in){
	int digs = to_string(in).size();

	int result = (digs-1)*9;

	int numComp = stoi(string(digs, '1'));

	for (int i = 1; i<=9; i++){
		int aux = numComp * i;
		if (aux <= in)
			result++;
	}

	return result;	
}

int main() {
	int cases, in;
	cin >> cases;

	for (int j = 0; j<cases; j++){
		cin >> in;
		cout << process(in) << endl;
	}
	
	return 0;
}