#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases, size;
	cin >> cases;

	while (cases--){
		cin >> size;
		vector<int> elements(size);
		for (int &e : elements)
			cin >> e;

		int maxElement = elements[max_element(elements.begin(), elements.end()) - elements.begin()];
		int minElement = elements[min_element(elements.begin(), elements.end()) - elements.begin()];
		cout << maxElement - minElement << endl;
	}
	return 0;
}