#include <iostream>

using namespace std;

int main() {
	int num, cantDivs;

	while(cin >> num){
		if (num%2 == 0){
			cantDivs = num/2;
	
			cout << cantDivs << endl;
			
			for (int i=0; i<cantDivs; i++)
				cout << "2 ";
			
		}else{
			cantDivs = num/2;
	
			cout << cantDivs << endl;
			
			cout << "3 ";
			
			for (int i=1; i<cantDivs; i++)
				cout << "2 ";
		}
	
		cout << endl;
	}
	return 0;
}