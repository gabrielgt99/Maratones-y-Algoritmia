#include <bits/stdc++.h>

using namespace std;

bool proceso(vector<list<int>>& grafo, int numNodos){

  for (int i = 1; i<numNodos+1; i++){
    if (!(grafo[i].size()+1 == numNodos)){

      vector <bool> marca(numNodos+1);

      for (int j = 1; j<numNodos; j++)
        marca[j] = false;

      auto it = grafo[i].begin();
      marca[i] == true;

      while(it != grafo[i].end()){
        marca[*it] == true;
        auto it2 = grafo[*it].begin();

        while(it2 != grafo[*it].end()){
          marca[*it2] == true;
          it2++;
        }

        it++;
      }
      for (int j = 1; j<numNodos+1; j++)
        cout << marca[j] << endl;

      for (int j = 1; j<numNodos+1; j++)
        if (marca[j] == false){
          cout << "linea: " << i << " elemento: " << j << endl;
          return false;
        }
    }
  }

  return true;
}


void enlazar(int nodo1, int nodo2, vector<list<int>>& grafo){
  grafo[nodo1].push_front(nodo2);
}

void procesoComplejo(int indicador, vector<list<int>>& grafo){
  vector<int> nodos(indicador);
    for(int i = 0; i<indicador; i++)
      cin >> nodos[i];

    for (int i = 0; i<indicador-1; i++){
      for (int j = i+1; j<indicador; j++){
        enlazar(nodos[i], nodos[j], grafo);
        enlazar(nodos[j], nodos[i], grafo);
      }
    }
}

// ostream& operator<< (ostream& out, vector<list<int>>& grafo){
//   for (int i = 0; i<grafo.size(); i++){
//     auto it = grafo[i].begin();
//     out << "grafo[" << i << "]: ";
//     while(it != grafo[i].end()){
//       out << *it << " ";
//       it++;
//     }
//     out << '\n';
//   }
//   return out;
// }


int main() {

  int numNodos, numProcesos;
  cin >> numNodos >> numProcesos;

  vector<list<int>> grafo(numNodos+1);

  while(numProcesos--){
    int indicador;
    cin >> indicador;

    if(indicador == 1){
      int nodo1, nodo2;
      cin >> nodo1 >> nodo2;
      enlazar(nodo1, nodo2, grafo);
    }else{
       procesoComplejo(indicador, grafo);
    }
  }
  if (proceso(grafo, numNodos))
    cout << "YES\n";
  else
    cout << "NO\n";

  //cout << grafo;

  return 0;
}
