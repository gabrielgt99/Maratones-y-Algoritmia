// Digits

// https://www.e-olymp.com/en/problems/2

#include <iostream>

using namespace std;

int main() {
  int num, ans = 1;
  cin >> num;

  while(num>=10){
    ans++;
    num /= 10;
  }
  cout << ans << '\n';
  return 0;
}
