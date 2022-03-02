#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int n = 500000;
vector<long> prime(n);

vector<long> criba(int n){
	// vector<long> prime(n);
	prime[0] = 2;
	prime[1] = 3;
	long size = 2;
	for (long i = 5; size < n; i+=2){
		bool isPrime = true;
		for (long j = 1; prime[j] * prime[j] <= i; j++){
			if (i % prime[j] == 0){
				isPrime = true;
				break;
			}
		}
		if (isPrime)
			prime[size++] = i;
	}
	return prime;
}

int main() {

	prime = criba(n);

	int cases;
	long value;
	cin >> cases;

	for (int i = 0; i<cases; i++){
		cin >> value;
		cout << ((binary_search(prime.begin(), prime.end(), sqrt(value))) ? "YES\n" : "NO\n");
		
	
		// for (long i = 0; i<500000; i++){
		// 	cout << prime[i] << "\n";
		// }
	}
	
	return 0;
}