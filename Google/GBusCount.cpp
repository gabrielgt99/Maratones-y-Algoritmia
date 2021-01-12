#include <iostream>
#include <vector>

using namespace std;

void proceso(int cuidad, vector<int> vec, int& rpta){
  for (int i = 0; i<vec.size(); i+=2)
    if (vec[i] <= cuidad)
      if (vec[i + 1] >= cuidad)
        rpta++;
}

int main() {
  int casos;
  cin >> casos;
  for(int i = 1; i<=casos; i++){
    
    int numeroBuses, interes, cuidad;
    cin >> numeroBuses;

    vector<int> vec(numeroBuses*2);

    for (int i = 0; i<numeroBuses*2; i++)
      cin >> vec[i];

    cin >> interes;
    int rpta;
    cout << "Case #" << i << ":";
    while(interes--){
      rpta = 0;
      cin >> cuidad;
      proceso(cuidad, vec, rpta);
      cout << ' ' << rpta;
    }
    cout << '\n';
  }
  return 0;
}
