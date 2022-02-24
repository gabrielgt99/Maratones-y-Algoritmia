// Ilya and Bank Account

#include <iostream>

using namespace std;

int main() {
	string in;
	cin >> in;

	int max = stoi(in);
	if (max <=0){
		int digs = in.size();
	
		for (int i = 1; i<digs; i++){
			string aux = in;
			aux.erase(aux.begin()+i);
			
			int auxInt = stoi(aux);
			
			if (to_string(auxInt).size() == digs-1 || auxInt == 0)
				if (auxInt > max)
					max = auxInt;
	
		}
	
		cout << max << endl;
	}
	
	return 0;
}