#include <bits/stdc++.h>
using namespace std;
void Make(vector<int>& arr){
  fill(arr.begin(), arr.end(), -1);
}
int Find(int x,vector<int>& arr){
  int check=arr[x];
  if(check>=0) 
     return Find(check,arr);
  return x;
}
void Union(int x , int y,vector<int>& arr){
  int findx = Find(x,arr);
  int findy = Find(y,arr);
  if(findx!=findy){
    arr[findx] += arr[findy] ;
    arr[y] = findx;
    arr[findy] = findx;
  }
}
int solucion(vector<int>& vec){
  int solution = vec[1];
    for (int i = 1; i<vec.size(); i++){
      if (vec[i]<solution)
        solution = vec[i];
    }
  return solution*-1;
}
int main() {
  int cases, n , m;
  cin>> cases;
  while(cases--){
    cin>>n>>m;
    vector<int> vec(n+1);
    Make(vec);
    while(m--){
      int friend1,friend2;
      cin >> friend1>>friend2;
      Union(friend1, friend2, vec);
    }
    cout << solucion(vec) << '\n';
  }
  return 0;
}
