// Lucky Division

#include <iostream>

using namespace std;

int vec[14] = {4, 7, 47, 74, 44, 77, 444, 777, 447, 474, 477, 774, 744, 747};

bool process(int num){
	for (int i = 0; i<14; i++){
		if (num % vec[i] == 0){
			return true;
		}
	}
	return false;
}

int main() {
	int num;
	cin >> num;
	
	cout << (process(num) ? "YES\n" : "NO\n");
	
	return 0;
}