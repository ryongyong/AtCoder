#include<bits/stdc++.h>
using namespace std ;

int main(){
  int N ; cin >> N ; 
  vector<vector<int>> D(N , vector<int>(2));
  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < 2 ; j++){
      cin >> D.at(i).at(j) ;
    }
  }
  int cnt = 0 ; 
  for(int i = 0 ; i < N ; i++){
    if(D.at(i).at(0) == D.at(i).at(1)){
      cnt++ ; 
      if(cnt == 3){
        cout << "Yes" << endl ; 
        return 0 ; 
      }
    }
    else cnt = 0 ; 
  }
  cout << "No" << endl ; 
}