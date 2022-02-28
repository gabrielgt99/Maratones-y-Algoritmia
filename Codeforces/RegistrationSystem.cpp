#include <bits/stdc++.h>

using namespace std;

int main(){
	int cases;
	string name;
	cin >> cases;
	map<string, int> names;
	while (cases--){
		cin >> name;
		if (names.count(name) == 0){
			cout << "OK\n";
			names[name] = 1;
		}else{
			cout << name << names[name] << endl;
			names[name]++;
		}
	}

	return 0;
}