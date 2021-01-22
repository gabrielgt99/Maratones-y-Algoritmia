// Little C Loves 3 I

// http://codeforces.com/contest/1047/problem/A

#include <iostream>

using namespace std;

int main(){
  int num;
  cin >> num;

  if ((num-2)%3 == 0)
    cout << "1 2 " << num-3 << '\n';
  else
    cout << "1 1 " << num-2 << '\n';
  return 0;
}
