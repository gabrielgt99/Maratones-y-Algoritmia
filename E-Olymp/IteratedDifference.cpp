// Iterated Difference

// https://www.e-olymp.com/en/problems/2751

#include <iostream>
#include <vector>

using namespace std;

bool comprobacion(vector<int> entrada, int num){
    for (int i = 0; i<num-1; i++)
        if (entrada[i] != entrada[i+1])
            return true;

    return false;
}


int proceso (vector<int> entrada, int num, int& rpta){

    bool comp = comprobacion(entrada, num);

    if (rpta < 1000){
        if (comp){
            int primero = entrada[0];
            entrada[0] = abs(primero - entrada[1]);

            for (int i = 1; i<num-1; i++)
                entrada[i] = abs(entrada[i] - entrada[i+1]);

            entrada[num-1] = abs(primero - entrada[num-1]);
            rpta ++;

            comp = comprobacion(entrada, num);

            if (comp)
                return proceso(entrada, num, rpta);
            else
                return rpta;

        }
    }else{
        return -1;
    }

    return rpta;
}

int main(){
    int num, caso = 1;
    while(cin >> num){
        if (num == 0)
            break;
        vector<int> entrada(num);
        for (int i = 0; i<num; i++)
            cin >> entrada[i];
        int rpta = 0;
        int sol = proceso(entrada, num, rpta);
        if (sol == -1)
            cout << "Case " << caso << ": " << "not attained" << '\n';
        else
            cout << "Case " << caso << ": " << sol << " iterations" << '\n';
        caso++;

    }

    return 0;
}
