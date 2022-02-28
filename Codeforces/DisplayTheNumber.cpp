#include <iostream>

using namespace std;

int main() {
	int num, aux, cases;
	cin >> cases;
	while(cases--){
		
		cin >> num;
	
		if (num%2 == 1){
			cout << 7;
			num -= 3;
		}
			
		aux = num/2;
		while(aux--){
			cout << 1;
		}
		cout << endl;
	}
	
	return 0;
}