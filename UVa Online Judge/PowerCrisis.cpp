#include <bits/stdc++.h>
using namespace std;

list<int> num;

list<int> &crearListas(int elementos){
  num.clear();
  for (int i = 2; i<=elementos; i++)
    num.push_back(i);
  return num;
}

int recorrido(list<int>&regiones, int saltos){
  list<int>::iterator it = regiones.begin();

  while(it != regiones.end()){
    for (int i = 1; i<saltos; i++){
      it++;
      if (it == regiones.end())
        it = regiones.begin();
    }

    if (*it == 13)
      break;

    it = regiones.erase(it);
    
    if (it == regiones.end())
        it = regiones.begin();
  }

  if (regiones.size() > 1)
    return -1;

  return 13;
}

int solucion(int elementos){
  int saltos = 1, ultimo = 0;
  while(ultimo != 13){
    saltos++;
    list<int> regiones = crearListas(elementos);
    ultimo = recorrido(regiones, saltos);
  }
  return saltos;
}


int main() {
  int elementos, resultado;
  
  while(cin >> elementos){
    if (elementos == 0)
      break;

    if (elementos == 13)
      cout << "1\n";
    else
      cout << solucion(elementos) << '\n';
  }

  return 0;
}
