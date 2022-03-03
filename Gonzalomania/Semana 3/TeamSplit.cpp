#include <bits/stdc++.h>

using namespace std;

int main() {
	int numPlayers, team1 = 0, team2 = 0;
	cin >> numPlayers;

	vector<int> players(numPlayers);

	for (int &e : players)
		cin >> e;

	sort(players.begin(), players.end());

	for (int i=0, j=1; i<numPlayers; i+=2, j+=2){
		team1 += players[i];
		team2 += players[j];
	}

	cout << ( (team1 > team2) ? team1-team2 : team2-team1 ) << endl;
	
	return 0;
}