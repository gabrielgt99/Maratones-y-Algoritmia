// The Phantom Meneace

#include <iostream>

using namespace std;

int main() {
    int doors, droits;

    while (cin >> doors) {
        cin >> droits;
        int inDoors[doors], inDroits[droits];
        for (int i = 0; i < doors; i++) {
            cin >> inDoors[i];
        }

        for (int i = 0; i < droits; i++) {
            cin >> inDroits[i];
        }

        int max = -101;
        for (int i = 0; i < doors; i++) {
            int min = 101, aux;
            for (int j = 0; j < droits; j++) {
                aux = inDoors[i] - inDroits[j];
                if (aux < 0) aux *= -1;
                if (aux < min) min = aux;
            }

            if (min > max) max = min;
        }

        cout << max << endl;
    }

    return 0;
}