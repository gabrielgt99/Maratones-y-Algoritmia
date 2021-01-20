//Domino Piling

//http://codeforces.com/contest/50/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int num1, num2, resultado;

  while(cin >> num1 >> num2){  
    resultado = (num1*num2)/2;
    cout << resultado << "\n";
  }
  
  return 0;
}
