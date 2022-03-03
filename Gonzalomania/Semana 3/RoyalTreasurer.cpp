#include <bits/stdc++.h>

using namespace std;

int main() {
	int size, ans = 0;
	cin >> size;

	vector<int> A(size);
	vector<int> B(size);

	for (int &e : A)
		cin >> e;

	for (int &e : B)
		cin >> e;

	sort(A.begin(), A.end());

	for (int j = 0; j<size; j++){

		int max = -1, id = 0;
		
		for (int i = 0; i<B.size(); i++)
			if (max < B[i]){
				max = B[i];
				id = i;
			}
	
		
		B.erase(B.begin()+id);

		ans += (max*A[j]);
		
		// cout << max << " * " << A[j] << " = " << max*A[j]<< endl;
	
	}

	cout << ans << endl;
	return 0;
}