#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> cortar(string linea){
  vector<string> cortado(6);

  int indice = 0;

    int num = 0;
    int num2 = 0;

    while((num2 = linea.find(';')) > 0) {
      string aux = linea.substr(num, num2);
      linea = linea.substr(num2+1);
      cortado[indice] = aux;
      indice++;
    }
    cortado[indice] = linea;
  return cortado;
}

struct Persona{
  int puntaje;
  string nombre;
  Persona ():puntaje(0), nombre(""){}
  Persona (int puntaje, string nombre):puntaje(puntaje), nombre(nombre){}
  bool operator<(Persona& p){
     if (p.puntaje < puntaje)
	return true;

     if (p.puntaje > puntaje)
        return false;

     return (p.nombre > nombre);
  }
};

int main() {
  int jugadores, casos = 1;
  while(cin >> jugadores){
    cout << "Case " << casos << ":" << '\n';
    vector<Persona> equipo(jugadores);
    string linea;
    getline(cin, linea, '\n');

    for (int k = 0; k<jugadores; k++){
       getline(cin, linea, '\n');

       vector<string> cortado = cortar(linea);

       int total = 0;

       for (int i = 1; i<6; i++){
	  int cont = 0, limite = cortado[i].size()-1;
          for (int j = 0; j < limite; j++)
             if (cortado[i][j] == '1')
	        cont++;

	   if (cortado[i][limite] == '1')
	      cont += 2;

           total += cont;
       }
       equipo[k].nombre = cortado[0];
       equipo[k].puntaje = total;
    }

    sort(equipo.begin(), equipo.end());

    for (Persona x:equipo)
       cout << x.nombre << " " << x.puntaje << endl;

    casos++;
  }
  return 0;
}
