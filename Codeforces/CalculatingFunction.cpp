// Calculating Function

// http://codeforces.com/contest/486/problem/A

#include <iostream>

using namespace std;

int main(){
  long long num;
  cin >> num;
  if (num%2 == 0)
    cout << num/2 << '\n';
  else
    cout << ((num+1)/2)*-1 << '\n';
  return 0;
}
