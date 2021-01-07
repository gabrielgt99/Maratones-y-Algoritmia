// Bitset

// https://www.e-olymp.com/en/problems/2802

#include <iostream>
#include <bitset>

using namespace std;

int main() {
  int num;
  while(cin >> num){
    int aux = 2, size = 1;
    while (aux <= num){
      aux *= 2;
      size++;
    }

    bitset<10> bit(num);
    string bitStr = bit.to_string();
    string ans = bitStr.substr((10-size),10);
    cout << ans << '\n';
  }
  return 0;
}
