#include <iostream>

using namespace std;

int main() {
	int cases;
	cin >> cases;

	while(cases--){
		long long num;
		cin >> num;
		
		string ans = num%2 == 0 ? "NO\n" : "YES\n";
		cout << ans;
	}

	return 0;
}