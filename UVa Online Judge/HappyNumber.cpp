//Happy Number - 10591

#include <iostream>
#include <vector>

using namespace std;

int operacion (int num){
    int ans = 0;
    while (num > 0){
        int aux = num%10;
        num /= 10;
        ans += aux*aux;
    }
    return ans;
}

bool happy (int num, vector<bool> vec){
  num = operacion(num);

  if (vec[num])
    return false;
  else if(num == 1)
    return true;
      
  vec[num] = true;
  return happy(num, vec);
}

int main() {
  int cases;
  cin >> cases;
  for (int i = 1; i<=cases; i++){
    vector<bool> vec(750, false);
    
    int num;
    cin >> num;
    
    if (happy(num, vec))
      cout << "Case #" << i << ": " << num << " is a Happy number.\n";
    else
      cout << "Case #" << i << ": " << num << " is an Unhappy number.\n";
  }

  return 0;
}