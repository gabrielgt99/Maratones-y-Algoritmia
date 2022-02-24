// Contest Winner

#include <iostream>
#include <map>

using namespace std;

int main() {

	int numEvents;

	while (cin >> numEvents){
		map<int, int> scores;
		map<int,int>::iterator it;
	
		int aux;
		cin >> aux;
		scores.insert({ aux, 1 });
		
		int maxValue = 0;
		int maxKey = aux;
	
		for (int i = 1; i<numEvents; i++){
			cin >> aux;
			it = scores.find(aux);
			if ( it == scores.end() ) {
			  scores.insert({ aux, 1 });
			} else {
				scores[aux]++;		
				if (scores[aux] > maxValue){
					maxValue = scores[aux];
					maxKey = aux;
				}
			}
		}
	
		cout << maxKey << endl;
	}
	return 0;
}