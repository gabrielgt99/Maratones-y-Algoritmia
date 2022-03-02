#include <iostream>

using namespace std;

int main() {
  int entries;
  cin >> entries;
  while(entries--){
    int num;
    cin >> num;
    if(num == 1) cout << 1 << endl;
    else cout << num / 2 << endl;
  }
  return 0;
}