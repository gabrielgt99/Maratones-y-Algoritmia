// Packets

// http://codeforces.com/contest/1037/problem/A

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << floor(log(n) / log(2)) + 1 << "\n";
  return 0;
}
