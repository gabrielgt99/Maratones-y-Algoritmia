/**#include <iostream>
#include <vector>

using namespace std;

  void Make(vector<int>& vec){
    fill(vec.begin(), vec.end(), -1);
  }

  int Find(int pos, vector<int>& vec){
    int cont = vec[pos];

    if (cont >= 0)
      return Find(cont, vec);
    
    return pos;
  }

  void Union(int num1, int num2, vector<int>& vec){
    int rep1 = Find(num1, vec);
    int rep2 = Find(num2, vec);
    if(rep1 != rep2){
      vec[rep1] += vec[rep2] ;
      vec[num2] = rep1;
      vec[rep2] = rep1;
    }
  }

int main() {
  int casos;
  cin >> casos;
  while(casos--){

    char lim;
    cin >> lim;
    cin.ignore();

    vector<int> vec(lim-64);
    Make(vec);

    string entrada;

    while(getline(cin, entrada) && entrada != ""){

      int num1 = entrada[0]-65;
      int num2 = entrada[1]-65;

      Union(num1, num2, vec);
    }

    int rpta = 0;
    
    for (int i = 0; i<vec.size(); i++)
      if (vec[i] < 0)
        rpta++;

    cout << rpta << '\n' << '\n';

  }
  return 0;
}

**/

#include <iostream>
#include <vector>

using namespace std;
vector<int> vec;

  void Make(int lim){
    vec.resize(lim-64);
    fill(vec.begin(), vec.end(), -1);
  }

  int Find(int pos){
    int cont = vec[pos];

    if (cont >= 0)
      return Find(cont);
    
    return pos;
  }

  void Union(int num1, int num2){
    int rep1 = Find(num1);
    int rep2 = Find(num2);
    if(rep1 != rep2){
      vec[rep1] += vec[rep2] ;
      vec[num2] = rep1;
      vec[rep2] = rep1;
    }
  }

int main() {
  int casos;
  cin >> casos;
  while(casos--){

    char lim;
    cin >> lim;
    cin.ignore();

    Make(lim);

    string entrada;

    while(getline(cin, entrada) && entrada != ""){

      int num1 = entrada[0]-65;
      int num2 = entrada[1]-65;

      Union(num1, num2);
    }

    int rpta = 0;
    
    for (int i = 0; i<vec.size(); i++)
       if (vec[i] < 0)
          rpta++;

    cout << rpta << '\n';
    if (casos >= 0)
       cout << '\n';
    

  }
  return 0;
}
