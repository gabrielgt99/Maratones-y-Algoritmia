#include <bits/stdc++.h>

using namespace std;

int main() {
	int numSec;
	cin >> numSec;

	vector<int> secuence(numSec);
	for (int &e : secuence)
		cin >> e;

	sort(secuence.begin(), secuence.end());

	for (int &e : secuence)
		cout << e << " ";

	cout << endl;
	
	return 0;
}