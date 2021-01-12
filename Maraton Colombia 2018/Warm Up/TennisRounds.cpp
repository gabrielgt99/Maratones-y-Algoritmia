#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float n, i, j;
  int contador;

  while(cin >> n >> i >> j){
    contador = 0;
    while(i/2 != j/2){
      i = (i/2 < 1 ? 1 : ceil(i/2));
      j = (j/2 < 1 ? 1 : ceil(j/2));
      contador++;
    }
    cout << contador << '\n';
  }
  return 0;
}
