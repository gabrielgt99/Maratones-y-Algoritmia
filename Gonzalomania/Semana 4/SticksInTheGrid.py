#include <iostream>

using namespace std;

int main() {
	int n = -1, ans;
	
	while(n != 0){
		cin >> n;
		ans = 2*n*(n+1);
		cout << (ans ? to_string(ans) : "") << "\n";
	}	
	return 0;
}