#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Jugador{
  int ataque, defensa;
  string nombre;
  Jugador ():ataque(0),defensa(0), nombre(""){}
  Jugador (int ataque, int defensa, string nombre):ataque(ataque), defensa(defensa),nombre(nombre){}

  bool operator<(Jugador& j){
    if (j.ataque < ataque)
	    return true;

    if (j.ataque > ataque)
      return false;

    return (j.defensa > defensa);
  }
};

bool alfabetico(Jugador& j1, Jugador& j2){
  return (j1.nombre <= j2.nombre);
}

int main() {
  int casos;
  cin >> casos;
  for(int j = 1; j<=casos; j++){
    vector<Jugador> equipo(10);

    for (int i = 0; i<10; i++){
      int ataque, defensa;
      string nombre;
      cin >> nombre >> ataque >> defensa;
      equipo[i].nombre = nombre;
      equipo[i].ataque = ataque;
      equipo[i].defensa = defensa;
    }

    sort(equipo.begin(), equipo.end());
    sort(equipo.begin(), equipo.end()-5, alfabetico);
    sort(equipo.begin()+5, equipo.end(), alfabetico);


    cout << "Case " << j << ":\n";
    for (int i = 0; i<10; i++){
      if(i == 4 || i == 9)
       cout << equipo[i].nombre << ")\n";
      else if(i == 5 || i == 0)
        cout << "(" << equipo[i].nombre << ", ";
      else
        cout << equipo[i].nombre << ", ";
    }
    if (j == casos)
      cout << '\n';
     
  }
  return 0;
}
