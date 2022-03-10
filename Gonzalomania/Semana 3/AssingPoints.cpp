#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> points(10001);

int main() {
	int cases, negative = 0;
	cin >> cases;

	vector <int> aux(cases);
	
	for(int i = 0; i < cases; i++){
		cin >> aux[i];
		if(aux[i] == -1) negative++;
	}

	auto aux2 = aux;
	
	sort(aux.rbegin(), aux.rend());

	for(int i = 0; i < cases; i++)
		if(aux[i] != -1 ) points[aux[i]] = i + 1 + negative;

	for(int i = 0; i < cases; i++)
		cout << (aux2[i] == -1 ? 0 : points[aux2[i]]) << " ";

	cout << "\n";

	return 0;
}