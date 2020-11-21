#include<bits/stdc++.h>
using namespace std ;

int main(){
  int N , M ; cin >> N >> M ; 
  vector<vector<int>> U(N , vector<int>(N)) ; 
  for(int i = 0 ; i < M ; i++){
    int a, b ; 
    cin >> a >> b ; 
    a-- ; 
    b-- ; 
    U.at(a).at(b) = 1 ; 
    U.at(b).at(a) = 1 ; 
  }
  int ans = 0 ; 
  for(int S = 0 ; S < (1<<N) ; S++){
    bool ok = true ; 
    for(int i = 0 ; i < N ; i++)if(S &(1<<i)){
      for(int j = 0 ; j < N ; j++)if(S &(1<<j)){
        if(i == j ) continue ;
        if(U.at(i).at(j) == 0  ) ok = false ; 
      }
    }
    if(ok) ans = max(ans , __builtin_popcount(S)) ; 
  }
  
  cout << ans << endl;
}



